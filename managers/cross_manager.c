/*
** EPITECH PROJECT, 2020
** CROSS MANAGER
** File description:
** MANAGE CROSS
*/

#include "../include/game_manager.h"

void set_cursor(game_t *game, sfBool bool)
{
    sfRenderWindow_setMouseCursorVisible(game->window, bool);
}

void update_cursor(game_t *game)
{
    if (game->event.type == sfEvtMouseMoved) {
        game->cursor.vector.x = game->event.mouseMove.x - 27;
        game->cursor.vector.y = game->event.mouseMove.y - 27;
        sfSprite_setPosition(game->cursor.sprite, game->cursor.vector);
    }
    sfRenderWindow_drawSprite(game->window, game->cursor.sprite, NULL);
}