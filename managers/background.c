/*
** EPITECH PROJECT, 2020
** BACK GROUND MANAGER
** File description:
** NO DESCRIPTION FOUND
*/

#include "../include/game_manager.h"

void switch_back_ground(game_t *game, sfTexture *texture)
{
    game->scenes.current = texture;
    sfSprite_setTexture(game->scenes.background, game->scenes.current, sfTrue);
}

void update_background(game_t *game)
{
    sfRenderWindow_display(game->window);
    sfRenderWindow_drawSprite(game->window, game->scenes.background, NULL);
}