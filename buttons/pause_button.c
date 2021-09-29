/*
** EPITECH PROJECT, 2020
** PAUSE BUTTON
** File description:
** NO DESCRIPTION FOUND
*/


#include "../include/game_manager.h"

void continue_bouton(game_t *game)
{
    if (game->event.mouseButton.x >= 1144 &&
    game->event.mouseButton.x <= 1870 &&
    game->event.mouseButton.y >= 600 &&
    game->event.mouseButton.y <= 717 &&
    (game->state == PAUSE)) {
       unpause(game);
    }
}

void over_continue_bouton(game_t *game)
{
    if (game->event.mouseMove.x >= 1173 &&
    game->event.mouseMove.x <= 1870 &&
    game->event.mouseMove.y >= 600 &&
    game->event.mouseMove.y <= 717 &&
    (game->state == PAUSE)) {
        sfSprite_setScale(game->menu.continue_bouton, (sfVector2f) {1.3, 1.3});
        sfSprite_setPosition(game->menu.continue_bouton,
        (sfVector2f) {963, 580});
    } else {
        sfSprite_setScale(game->menu.continue_bouton, (sfVector2f) {1, 1});
        sfSprite_setPosition(game->menu.continue_bouton,
        (sfVector2f) {1173, 600});
    }
}