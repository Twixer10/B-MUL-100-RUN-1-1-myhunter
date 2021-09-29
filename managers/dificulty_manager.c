/*
** EPITECH PROJECT, 2020
** DIFICULTY MANAGER
** File description:
** NO DESCRIPTION FOUND
*/

#include "../include/game_manager.h"
#include "../include/my.h"

void set_dificulty(game_t *game, char *name, int nbr_bird, int attempt)
{
    dificulty_t dificulty;

    dificulty.attempt = attempt;
    dificulty.name = name;
    dificulty.nbr_bird = nbr_bird;
    game->dificulty = dificulty;
}