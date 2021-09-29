/*
** EPITECH PROJECT, 2020
** UTILS 2
** File description:
** NO DESCRIPTION FOR YOU
*/

#include "../include/game_manager.h"

void unpause(game_t *game)
{
    game->state = INGAME;
    sfMusic_play(game->theme);
    switch_back_ground(game, game->textures.ingame);
    set_cursor(game, sfFalse);
}

