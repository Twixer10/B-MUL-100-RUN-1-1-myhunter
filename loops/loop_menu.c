/*
** EPITECH PROJECT, 2020
** LOOP MENU
** File description:
** NO DESCRIPTION FOUND
*/

#include <stdio.h>
#include "../include/game_manager.h"
#include "../include/my.h"

void loop_menu(game_t *game)
{
    update_background(game);
    display_menu(game);
    while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        button_close(game);
        over_play_bouton(game);
        over_difficulty_bouton(game);
        over_quit_bouton(game);
        if (game->event.type == sfEvtMouseButtonReleased) {
            play_bouton(game);
            difficulty_bouton(game);
            quit_bouton(game);
        }
    }
}
