/*
** EPITECH PROJECT, 2020
** WIN LOOP 
** File description:
** NO DESCRIPTION FOUND
*/

#include "../include/game_manager.h"

void loop_win(game_t *game)
{
    update_background(game);
    display_wl(game, game->menu.you_win);
    display_end_score(game);
    while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        button_close(game);
        over_main_menu_bouton(game);
        over_wl_quit_bouton(game);
        over_try_again_bouton(game);
        if (game->event.type == sfEvtMouseButtonReleased) {
            try_again_bouton(game);
            main_menu_bouton(game);
            wl_quit_bouton(game);
        }
    }
}