/*
** EPITECH PROJECT, 2020
** MANAGE MENU BOUTTON
** File description:
** NO DESCRIPTION FOUND
*/

#include "../include/game_manager.h"

void play_bouton(game_t *game)
{
    if (game->event.mouseButton.x >= 1508 &&
    game->event.mouseButton.x <= 1870 &&
    game->event.mouseButton.y >= 450 &&
    game->event.mouseButton.y <= 567 &&
    game->state == MENU) {
        game->user.score = 0;
        game->user.missed_shot = 0;
        game->state = INGAME;
        switch_music(game, "./ressources/ingame_music.ogg");
        set_cursor(game, sfFalse);
        switch_back_ground(game, game->textures.ingame);
        init_birds(game);
        sfMusic_setPitch(game->theme, game->dificulty.pitch);
    }
}

void over_play_bouton(game_t *game)
{
    if (game->event.mouseMove.x >= 1508 &&
    game->event.mouseMove.x <= 1870 &&
    game->event.mouseMove.y >= 450 &&
    game->event.mouseMove.y <= 567 &&
    game->state == MENU) {
        sfSprite_setScale(game->menu.play_bouton, (sfVector2f) {1.3, 1.3});
        sfSprite_setPosition(game->menu.play_bouton, (sfVector2f) {1408, 430});
    } else {
        sfSprite_setScale(game->menu.play_bouton, (sfVector2f) {1, 1});
        sfSprite_setPosition(game->menu.play_bouton, (sfVector2f) {1508, 450});
    }
}

void difficulty_bouton(game_t *game)
{
    if (game->event.mouseButton.x >= 1053 &&
    game->event.mouseButton.x <= 1870 &&
    game->event.mouseButton.y >= 600 &&
    game->event.mouseButton.y <= 718 &&
    game->state == MENU) {
        game->state = DIFFICULTY;
    }
}

void over_difficulty_bouton(game_t *game)
{
    if (game->event.mouseMove.x >= 1053 &&
    game->event.mouseMove.x <= 1870 &&
    game->event.mouseMove.y >= 600 &&
    game->event.mouseMove.y <= 718 &&
    game->state == MENU) {
        sfSprite_setScale(game->menu.difficulty_bouton,
        (sfVector2f) {1.3, 1.3});
        sfSprite_setPosition(game->menu.difficulty_bouton,
        (sfVector2f) {808, 580});
    } else {
        sfSprite_setScale(game->menu.difficulty_bouton,
        (sfVector2f) {1, 1});
        sfSprite_setPosition(game->menu.difficulty_bouton,
        (sfVector2f) {1053, 600});
    }
}