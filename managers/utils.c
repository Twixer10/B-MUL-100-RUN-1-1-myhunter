/*
** EPITECH PROJECT, 2020
** UTILS
** File description:
** NO DESCRIPTON FOUND
*/

#include "../include/my.h"
#include "../include/game_manager.h"

void malloc_bird(game_t *game)
{
    game->birds = malloc(sizeof(bird_t) * game->dificulty.nbr_bird);
    for (int i = 0; i < game->dificulty.nbr_bird; i++) {
        game->birds[i] = new_bird(game);
    }
}

void remake_bird(game_t *game)
{
    for (int i = 0; i < game->dificulty.nbr_bird; i++) {
        game->birds[i] = new_bird(game);
    }
}

void button_close(game_t *game)
{
    if (game->event.type == sfEvtClosed) {
        game->state = CLOSE;
        end_game(game);
    }
}

void pause(game_t *game)
{
    if (game->event.type == sfEvtKeyPressed) {
        if (game->event.key.code == sfKeyEscape) {
            set_position_other(game);
            game->state = PAUSE;
            sfMusic_pause(game->theme);
            switch_back_ground(game, game->textures.wl_background);
            set_cursor(game, sfTrue);
        }
    }
}

int my_random(int min, int max)
{
    return ((rand() % (max - min + 1)) + min);
}