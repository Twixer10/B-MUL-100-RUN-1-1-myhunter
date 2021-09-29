/*
** EPITECH PROJECT, 2020
** LOOSE DETECTION
** File description:
** DETECT LOOSE CONDITION
*/

#include "../include/game_manager.h"

void check_loose(game_t *game)
{
    if (game->user.missed_shot >= game->dificulty.attempt) {
        set_position_wl(game, game->menu.game_over, LOOSE);
        set_cursor(game, sfTrue);
        switch_back_ground(game, game->textures.wl_background);
        sfMusic_stop(game->theme);
        set_position_menu(game);
        compare_score(game);
        game->state = LOOSE;
    }
}