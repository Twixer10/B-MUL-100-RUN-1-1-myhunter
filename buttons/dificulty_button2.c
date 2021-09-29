/*
** EPITECH PROJECT, 2020
** DIFFICULTY BUTTON MANAGER 2
** File description:
** NO DESCRIPTION FOUND
*/

#include "../include/game_manager.h"
#include "../include/my.h"

void hard_bouton(game_t *game)
{
    if (game->event.mouseButton.x >= 1457 &&
    game->event.mouseButton.x <= 1870 &&
    game->event.mouseButton.y >= 750 &&
    game->event.mouseButton.y <= 867 &&
    game->state == DIFFICULTY) {
        game->dificulty = (dificulty_t) {"Difficulty: Hard", 20, 5, 1.0, 1.5,
        1.25, sfFalse, ""};
        sfText_setString(game->menu.disp_difficulty, game->dificulty.name);
        game->state = MENU;
    }
}

void over_hard_bouton(game_t *game)
{
    if (game->event.mouseMove.x >= 1457 &&
    game->event.mouseMove.x <= 1870 &&
    game->event.mouseMove.y >= 750 &&
    game->event.mouseMove.y <= 867 &&
    game->state == DIFFICULTY) {
        sfSprite_setScale(game->menu.hard_bouton, (sfVector2f) {1.3, 1.3});
        sfSprite_setPosition(game->menu.hard_bouton, (sfVector2f) {1334, 730});
        game->dificulty.describe =
        my_strcat(DESCRIPTION_HARD, DESCRIPTION_HARD2);
    } else {
        sfSprite_setScale(game->menu.hard_bouton, (sfVector2f) {1, 1});
        sfSprite_setPosition(game->menu.hard_bouton, (sfVector2f) {1457, 750});
    }
}

void uhc_bouton(game_t *game)
{
    if (game->event.mouseButton.x >= 572 &&
    game->event.mouseButton.x <= 1870 &&
    game->event.mouseButton.y >= 900 &&
    game->event.mouseButton.y <= 1018 &&
    game->state == DIFFICULTY) {
        game->dificulty = (dificulty_t) {"Difficulty: Ultra HardCore", 30, 1,
        1.5, 2.2, 1.5, sfFalse, ""};
        sfText_setString(game->menu.disp_difficulty, game->dificulty.name);
        game->state = MENU;
    }
}

void over_uhc_bouton(game_t *game)
{
    if (game->event.mouseMove.x >= 572 &&
    game->event.mouseMove.x <= 1870 &&
    game->event.mouseMove.y >= 900 &&
    game->event.mouseMove.y <= 1018 &&
    game->state == DIFFICULTY) {
        sfSprite_setScale(game->menu.ultra_hardcore_bouton,
        (sfVector2f) {1.3, 1.3});
        sfSprite_setPosition(game->menu.ultra_hardcore_bouton,
        (sfVector2f) {182, 880});
        game->dificulty.describe = my_strcat(DESCRIPTION_UHC, DESCRIPTION_UHC2);
    } else {
        sfSprite_setScale(game->menu.ultra_hardcore_bouton,
        (sfVector2f) {1, 1});
        sfSprite_setPosition(game->menu.ultra_hardcore_bouton,
        (sfVector2f) {572, 900});
    }
}

void display_describe(game_t *game)
{
    if (game->dificulty.isDiscrible) {
        sfText_setString(game->menu.describe, game->dificulty.describe);
        sfText_setFont(game->menu.describe,
        (sfFont *) sfFont_createFromFile("./ressources/LLPIXEL3.ttf"));
        sfText_setCharacterSize(game->menu.describe, 50);
        sfText_setColor(game->menu.describe, sfBlack);
        sfRenderWindow_drawText(game->window, game->menu.describe, NULL);
    } else {
        return;
    }
}