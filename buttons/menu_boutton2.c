/*
** EPITECH PROJECT, 2020
** MANAGE MENU BOUTON 2
** File description:
** NO DESCRIPTION FOUND
*/

#include "../include/game_manager.h"
#include <stdlib.h>

void quit_bouton(game_t *game)
{
    if (game->event.mouseButton.x >= 1533 &&
    game->event.mouseButton.x <= 1870 &&
    game->event.mouseButton.y >= 750 &&
    game->event.mouseButton.y <= 868 &&
    game->state == MENU) {
        end_game(game);
    }
}

void over_quit_bouton(game_t *game)
{
    if (game->event.mouseMove.x >= 1533 &&
    game->event.mouseMove.x <= 1870 &&
    game->event.mouseMove.y >= 750 &&
    game->event.mouseMove.y <= 868 &&
    game->state == MENU) {
        sfSprite_setScale(game->menu.quit_bouton, (sfVector2f) {1.3, 1.3});
        sfSprite_setPosition(game->menu.quit_bouton, (sfVector2f) {1432, 730});
    } else {
        sfSprite_setScale(game->menu.quit_bouton, (sfVector2f) {1, 1});
        sfSprite_setPosition(game->menu.quit_bouton, (sfVector2f) {1533, 750});
    }
}