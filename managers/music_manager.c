/*
** EPITECH PROJECT, 2020
** MUSIC MANAGER
** File description:
** NO DESCRIPTION FOUND
*/

#include "../include/game_manager.h"

void switch_music(game_t *game, char *new_music)
{
    sfMusic_destroy(game->theme);
    game->theme = sfMusic_createFromFile(new_music);
    sfMusic_play(game->theme);
    sfMusic_setLoop(game->theme, sfTrue);
}

void fire(game_t *game)
{
    sfSound_play(game->cursor.sound);
}
