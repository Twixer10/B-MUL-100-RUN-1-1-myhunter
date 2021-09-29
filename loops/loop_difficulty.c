/*
** EPITECH PROJECT, 2020
** LOOP DIFFICULTY
** File description:
** NO DESCRIPTION FOUND
*/

#include "../include/game_manager.h"

void loop_difficulty(game_t *game)
{
    update_background(game);
    display_difficulty(game);
    display_describe(game);
    while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        button_close(game);
        over_easy_bouton(game);
        over_normal_bouton(game);
        over_hard_bouton(game);
        over_uhc_bouton(game);
        description_found(game);
        if (game->event.type == sfEvtMouseButtonReleased) {
            easy_bouton(game);
            normal_bouton(game);
            hard_bouton(game);
            uhc_bouton(game);
        }
    }
}

void display_difficulty(game_t *game)
{
    sfRenderWindow_drawSprite(game->window, game->menu.easy_bouton, NULL);
	sfRenderWindow_drawSprite(game->window, game->menu.normal_bouton, NULL);
	sfRenderWindow_drawSprite(game->window, game->menu.hard_bouton, NULL);
	sfRenderWindow_drawSprite(game->window, game->menu.ultra_hardcore_bouton,
    NULL);
}

void set_position_difficulty(game_t *game)
{
    sfSprite_setPosition(game->menu.easy_bouton, (sfVector2f) {1526, 450});
	sfSprite_setPosition(game->menu.normal_bouton, (sfVector2f) {1295, 600});
	sfSprite_setPosition(game->menu.hard_bouton, (sfVector2f) {1457, 750});
	sfSprite_setPosition(game->menu.ultra_hardcore_bouton,
    (sfVector2f) {572, 900});
}