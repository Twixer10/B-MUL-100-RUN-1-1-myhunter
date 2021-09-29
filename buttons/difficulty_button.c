/*
** EPITECH PROJECT, 2020
** DIFFICULTY BUTTON MANAGER
** File description:
** NO DESCRIPTION FOUND
*/

#include "../include/game_manager.h"
#include "../include/my.h"

void easy_bouton(game_t *game)
{
    if (game->event.mouseButton.x >= 1526 &&
    game->event.mouseButton.x <= 1870 &&
    game->event.mouseButton.y >= 450 &&
    game->event.mouseButton.y <= 567 &&
    game->state == DIFFICULTY) {
        game->dificulty = (dificulty_t) {"Difficulty: Easy", 5, 8, 0.5, 0.7,
        0.85, sfFalse, ""};
        sfText_setString(game->menu.disp_difficulty, game->dificulty.name);
        game->state = MENU;
    }
}

void over_easy_bouton(game_t *game)
{
    if (game->event.mouseMove.x >= 1526 &&
    game->event.mouseMove.x <= 1870 &&
    game->event.mouseMove.y >= 450 &&
    game->event.mouseMove.y <= 567 &&
    game->state == DIFFICULTY) {
        sfSprite_setScale(game->menu.easy_bouton, (sfVector2f) {1.3, 1.3});
        sfSprite_setPosition(game->menu.easy_bouton, (sfVector2f) {1423, 430});
        game->dificulty.describe =
        my_strcat(DESCRIPTION_EASY, DESCRIPTION_EASY2);
    } else {
        sfSprite_setScale(game->menu.easy_bouton, (sfVector2f) {1, 1});
        sfSprite_setPosition(game->menu.easy_bouton, (sfVector2f) {1526, 450});
    }
}

void normal_bouton(game_t *game)
{
    if (game->event.mouseButton.x >= 1295 &&
    game->event.mouseButton.x <= 1870 &&
    game->event.mouseButton.y >= 600 &&
    game->event.mouseButton.y <= 717 &&
    game->state == DIFFICULTY) {
        game->dificulty = (dificulty_t) {"Difficulty: Normal", 10, 10, 0.6, 1.0,
         1.0, sfFalse, ""};
        sfText_setString(game->menu.disp_difficulty, game->dificulty.name);
        game->state = MENU;
    }
}

void over_normal_bouton(game_t *game)
{
    if (game->event.mouseMove.x >= 1295 &&
    game->event.mouseMove.x <= 1870 &&
    game->event.mouseMove.y >= 600 &&
    game->event.mouseMove.y <= 717 &&
    game->state == DIFFICULTY) {
        sfSprite_setScale(game->menu.normal_bouton, (sfVector2f) {1.3, 1.3});
        sfSprite_setPosition(game->menu.normal_bouton,
         (sfVector2f) {1122, 580});
        game->dificulty.describe =
        my_strcat(DESCRIPTION_NORMAL, DESCRIPTION_NORMAL2);
    } else {
        sfSprite_setScale(game->menu.normal_bouton, (sfVector2f) {1, 1});
        sfSprite_setPosition(game->menu.normal_bouton,
         (sfVector2f) {1295, 600});
    }
}

void description_found(game_t *game)
{
    if (((game->event.mouseMove.x >= 1526 &&
    game->event.mouseMove.x <= 1870 &&
    game->event.mouseMove.y >= 450 &&
    game->event.mouseMove.y <= 567) ||
    (game->event.mouseMove.x >= 1295 &&
    game->event.mouseMove.x <= 1870 &&
    game->event.mouseMove.y >= 600 &&
    game->event.mouseMove.y <= 717) ||
    (game->event.mouseMove.x >= 572 &&
    game->event.mouseMove.x <= 1870 &&
    game->event.mouseMove.y >= 900 &&
    game->event.mouseMove.y <= 1018) ||
    (game->event.mouseMove.x >= 1457 &&
    game->event.mouseMove.x <= 1870 &&
    game->event.mouseMove.y >= 750 &&
    game->event.mouseMove.y <= 867)) && game->state == DIFFICULTY) {
        game->dificulty.isDiscrible = sfTrue;
    } else {
        game->dificulty.isDiscrible = sfFalse;
    }
}