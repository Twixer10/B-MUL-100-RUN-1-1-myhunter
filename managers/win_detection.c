/*
** EPITECH PROJECT, 2020
** WIN DETECTION
** File description:
** DETECT WIN CONDITION
*/

#include "../include/game_manager.h"
#include "../include/my.h"

void check_win(game_t *game)
{
    int k = 0;
    for (int i = 0; i < game->dificulty.nbr_bird; i++) {
        if (game->birds[i].state == DEAD) {
            k++;
        }
    }
    if (k == game->dificulty.nbr_bird) {
        set_position_wl(game, game->menu.you_win, WIN);
        set_cursor(game, sfTrue);
        switch_back_ground(game, game->textures.wl_background);
        sfMusic_stop(game->theme);
        set_position_menu(game);
        compare_score(game);
        game->state = WIN;
    }
}