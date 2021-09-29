/*
** EPITECH PROJECT, 2020
** WIN AND LOOSE BUTTONS 2
** File description:
** NO DESCRIPTION FOUND
*/

#include "../include/game_manager.h"

void try_again_bouton(game_t *game)
{
    if (game->event.mouseButton.x >= 1144 &&
    game->event.mouseButton.x <= 1870 &&
    game->event.mouseButton.y >= 600 &&
    game->event.mouseButton.y <= 717 &&
    (game->state == WIN || game->state == LOOSE)) {
        remake_bird(game);
        game->user.score = 0;
        game->user.missed_shot = 0;
        switch_back_ground(game, game->textures.ingame);
        set_cursor(game, sfFalse);
        game->theme = sfMusic_createFromFile("./ressources/ingame_music.ogg");
        sfMusic_play(game->theme);
        sfMusic_setPitch(game->theme, game->dificulty.pitch);
        game->state = INGAME;
    }
}

void over_try_again_bouton(game_t *game)
{
    if (game->event.mouseMove.x >= 1144 &&
    game->event.mouseMove.x <= 1870 &&
    game->event.mouseMove.y >= 600 &&
    game->event.mouseMove.y <= 717 &&
    (game->state == WIN || game->state == LOOSE)) {
        sfSprite_setScale(game->menu.try_again_bouton, (sfVector2f) {1.3, 1.3});
        sfSprite_setPosition(game->menu.try_again_bouton,
        (sfVector2f) {926, 580});
    } else {
        sfSprite_setScale(game->menu.try_again_bouton, (sfVector2f) {1, 1});
        sfSprite_setPosition(game->menu.try_again_bouton,
        (sfVector2f) {1144, 600});
    }
}