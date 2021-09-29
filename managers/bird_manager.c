/*
** EPITECH PROJECT, 2020
** BIRD MANAGER
** File description:
** NO DESCRIPTION FOUND
*/

#include "../include/game_manager.h"
#include "../include/my.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left == max_value)
        rect->left = 0;
}

bird_t new_bird(game_t *game)
{
    bird_t bird;

    bird.sprite = sfSprite_create();
    bird.rect.left = (int) my_random(1, 9) * 100;
    bird.rect.top = 0;
	bird.rect.width = 100;
	bird.rect.height = 97;
    bird.position.y = rand() % 500 + 100;
    bird.position.x = rand() % 3000 + 100;
    bird.speed = ((double) rand() / RAND_MAX * game->dificulty.speed_max +
    game->dificulty.speed_min);
    bird.direction = ((rand() % 2 + 1) > 1?LEFT_TO_RIGHT:RIGHT_TO_LEFT);
    bird.state = LOADING;
    sfSprite_setTexture(bird.sprite,
    (bird.direction == LEFT_TO_RIGHT)?game->textures.bird:
    game->textures.bird_reverse, sfTrue);
    return (bird);
}

void switch_texture(bird_t *bird, game_t *game)
{
    if (bird->direction == LEFT_TO_RIGHT) {
        sfSprite_setTexture(bird->sprite, game->textures.bird_reverse, sfTrue);
        bird->direction = RIGHT_TO_LEFT;
        return;
    }
    if (bird->direction == RIGHT_TO_LEFT) {
        sfSprite_setTexture(bird->sprite, game->textures.bird, sfTrue);
        bird->direction = LEFT_TO_RIGHT;
    }
}

void new_loc(bird_t *bird, game_t *game)
{
    if (game->clock.seconds > 0.05 || bird->state == LOADING) {
        bird->state = SPAWNED;
        sfSprite_move(bird->sprite, bird->position);
        bird->position.x += 
        ((bird->direction == LEFT_TO_RIGHT?25:-25) * bird->speed);
        sfSprite_setPosition(bird->sprite, bird->position);
        if (bird->position.x >= 2000.0 && bird->direction == LEFT_TO_RIGHT) {
            bird->position.y = rand() % 500 + 100;
            sfSprite_setPosition(bird->sprite, bird->position);
            bird->rect.left = (int) my_random(1, 9) * 100;
            switch_texture(bird, game);
        }
        if (bird->position.x <= -250.0 && bird->direction == RIGHT_TO_LEFT) {
            bird->position.y = rand() % 500 + 100;
            bird->rect.left = (int) my_random(1, 9) * 100;
            sfSprite_setPosition(bird->sprite, bird->position);
            switch_texture(bird, game);
        }
    }
}

void update_bird(game_t *game)
{
    game->clock.time = sfClock_getElapsedTime(game->clock.clock);
    game->clock.seconds = game->clock.time.microseconds / 1000000.0;
    for (int i = 0; i < game->dificulty.nbr_bird; i++) {
        if (game->birds[i].state != DEAD) {
            new_loc(&game->birds[i], game);
            if (game->clock.seconds > 0.05) {
                move_rect(&game->birds[i].rect, 100, 1000);
                sfClock_restart(game->clock.clock);
            }
            sfSprite_setTextureRect(game->birds[i].sprite, game->birds[i].rect);
            sfRenderWindow_drawSprite(game->window, game->birds[i].sprite,
            NULL);
        }
    }
}

void init_birds(game_t *game)
{
    malloc_bird(game);
}