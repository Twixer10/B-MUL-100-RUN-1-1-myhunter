/*
** EPITECH PROJECT, 2020
** WIN AND LOOSE BUTTON
** File description:
** NO DESCRIPTION FOR YOU
*/

#include "../include/game_manager.h"

void wl_quit_bouton(game_t *game)
{
    if (game->event.mouseButton.x >= 1509 &&
    game->event.mouseButton.x <= 1870 &&
    game->event.mouseButton.y >= 900 &&
    game->event.mouseButton.y <= 1031 &&
    (game->state == WIN ||
    game->state == LOOSE || game->state == PAUSE)) {
       end_game(game);
    }
}

void over_wl_quit_bouton(game_t *game)
{
    if (game->event.mouseMove.x >= 1509 &&
    game->event.mouseMove.x <= 1870 &&
    game->event.mouseMove.y >= 900 &&
    game->event.mouseMove.y <= 1031 &&
    (game->state == WIN ||
    game->state == LOOSE || game->state == PAUSE)) {
        sfSprite_setScale(game->menu.wl_quit, (sfVector2f) {1.3, 1.3});
        sfSprite_setPosition(game->menu.wl_quit, (sfVector2f) {1401, 880});
    } else {
        sfSprite_setScale(game->menu.wl_quit, (sfVector2f) {1, 1});
        sfSprite_setPosition(game->menu.wl_quit, (sfVector2f) {1509, 900});
    }
}

void main_menu_bouton(game_t *game)
{
    if (game->event.mouseButton.x >= 1186 &&
    game->event.mouseButton.x <= 1870 &&
    game->event.mouseButton.y >= 750 &&
    game->event.mouseButton.y <= 868 &&
    (game->state == WIN ||
    game->state == LOOSE || game->state == PAUSE)) {
        game->state = MENU;
        switch_back_ground(game, game->textures.menu);
        switch_music(game, "./ressources/menu_music.ogg");
        game->user.missed_shot = 0;
        game->user.missed_shot = 0;
    }
}

void over_main_menu_bouton(game_t *game)
{
    if (game->event.mouseMove.x >= 1186 &&
    game->event.mouseMove.x <= 1870 &&
    game->event.mouseMove.y >= 750 &&
    game->event.mouseMove.y <= 868 &&
    (game->state == WIN ||
    game->state == LOOSE || game->state == PAUSE)) {
        sfSprite_setScale(game->menu.main_menu_bouton, (sfVector2f) {1.3, 1.3});
        sfSprite_setPosition(game->menu.main_menu_bouton,
        (sfVector2f) {980, 730});
    } else {
        sfSprite_setScale(game->menu.main_menu_bouton, (sfVector2f) {1, 1});
        sfSprite_setPosition(game->menu.main_menu_bouton,
        (sfVector2f) {1186, 750});
    }
}