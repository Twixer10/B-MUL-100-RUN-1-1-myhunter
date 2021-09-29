/*
** EPITECH PROJECT, 2020
** LOOP IN GAME
** File description:
** NO DESCRIPTION FOUND
*/

#include "../include/game_manager.h"

void loop_in_game(game_t *game)
{
    update_background(game);
    update_bird(game);
    update_cursor(game);
    check_loose(game);
    check_win(game);
    display_score(game);
    while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        if (game->event.type == sfEvtMouseButtonReleased &&
            game->event.mouseButton.button == sfMouseLeft) {
            fire_bouton(game);
            click_on_bird(game);
        }
        pause(game);
        button_close(game);
    }
}

void add_score2(game_t *game, bird_t *bird)
{
    if (bird->direction == RIGHT_TO_LEFT) {
        if (game->event.mouseButton.x >= bird->position.x &&
            game->event.mouseButton.x <= (bird->position.x + 40) &&
            game->event.mouseButton.y >= bird->position.y + 20 &&
            game->event.mouseButton.y <= (bird->position.y + 60) &&
            game->state == INGAME) {
                game->user.score += 1000;
            } else {
                game->user.score += 500;
            }
    } else {
        add_score2(game, bird);
    }
}

void add_score(game_t *game, bird_t *bird)
{
    if (bird->direction == LEFT_TO_RIGHT) {
        if (game->event.mouseButton.x >= (bird->position.x + 60) &&
            game->event.mouseButton.x <= (bird->position.x + 100) &&
            game->event.mouseButton.y >= (bird->position.y + 20) &&
            game->event.mouseButton.y <= (bird->position.y + 60) &&
            game->state == INGAME) {
                game->user.score += 1000;
            } else {
                game->user.score += 500;
            }
    } else {
        add_score2(game, bird);
    }
}

void click_on_bird(game_t *game)
{
    for (int i = 0; i < game->dificulty.nbr_bird; i++) {
        if (game->event.mouseButton.x >= game->birds[i].position.x &&
        game->event.mouseButton.x <= (game->birds[i].position.x + 100) &&
        game->event.mouseButton.y >= game->birds[i].position.y &&
        game->event.mouseButton.y <= (game->birds[i].position.y + 97) &&
        game->state == INGAME) {
            if (game->birds[i].state != DEAD) {
                    sfSprite_destroy(game->birds[i].sprite);
                    game->birds[i].state = DEAD;
                    add_score(game, &game->birds[i]);
                    return;
            }
        }
    }
    game->user.missed_shot++;
}