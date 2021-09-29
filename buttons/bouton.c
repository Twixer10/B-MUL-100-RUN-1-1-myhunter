/*
** EPITECH PROJECT, 2020
** BOUTON MANAGER
** File description:
** NO DESCRIPTION FOUND
*/


#include "../include/game_manager.h"
#include "../include/my.h"

void fire_bouton(game_t *game)
{
    if (game->state == INGAME)
        if (game->event.mouseButton.button == sfMouseLeft)
            fire(game);
}