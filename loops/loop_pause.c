/*
** EPITECH PROJECT, 2020
** LOOP PAUSE MANAGER
** File description:
** NO DESCRIPTION FOUND
*/

#include "../include/game_manager.h"

void loop_pause(game_t *game)
{
    update_background(game);
    display_pause_btn(game);
    while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        button_close(game);
        unpause_key(game);
        over_continue_bouton(game);
        over_wl_quit_bouton(game);
        over_main_menu_bouton(game);
        if (game->event.type == sfEvtMouseButtonReleased) {
            continue_bouton(game);
            main_menu_bouton(game);
            wl_quit_bouton(game);
        }
    }
}

void display_pause_btn(game_t *game)
{
    sfRenderWindow_drawSprite(game->window, game->menu.pause, NULL);
	sfRenderWindow_drawSprite(game->window, game->menu.continue_bouton, NULL);
	sfRenderWindow_drawSprite(game->window, game->menu.main_menu_bouton, NULL);
	sfRenderWindow_drawSprite(game->window, game->menu.wl_quit, NULL);
}

void unpause_key(game_t *game)
{
    if (game->event.type == sfEvtKeyPressed)
        if (game->event.key.code == sfKeyEscape)
            unpause(game);
}