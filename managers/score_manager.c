/*
** EPITECH PROJECT, 2020
** SCORE MANAGER
** File description:
** NO DESCRIPTION FOUND
*/

#include "../include/game_manager.h"
#include "../include/my.h"
#include <stdio.h>

char *read_line(char *path)
{
    FILE *infile;
    char *str = NULL;
    size_t n = 0;

    infile = fopen(path, "r");
    if (infile == NULL) {
        my_printf("\nError opening file\n");
        return (" ");
    }
    getline(&str, &n, infile);
    fclose (infile);
    return (str);
}

void load_score(game_t *game)
{
    for (int i = 0; i < 8; i++) {
        add_load_score(game, i);
    }
}

void compare_score2(game_t *game)
{
    if (game->dificulty.attempt == 5) {
        if (game->user.score > game->hight_score.i_hard)
            score_hard(game, sfTrue);
        else
            score_hard(game, sfFalse);
    }
    if (game->dificulty.attempt == 1) {
        if (game->user.score > game->hight_score.i_uhc)
            score_uhc(game, sfTrue);
        else
            score_uhc(game, sfFalse);
    }
}

void compare_score(game_t *game)
{
    if (game->dificulty.attempt == 8) {
        if (game->user.score > game->hight_score.i_easy)
            score_easy(game, sfTrue);
        else
            score_easy(game, sfFalse);
    }
    if (game->dificulty.attempt == 10) {
        if (game->user.score > game->hight_score.i_normal)
            score_normal(game, sfTrue);
        else
            score_normal(game, sfFalse);
    }
    compare_score2(game);
}

void display_end_score(game_t *game)
{
    sfRenderWindow_drawText(game->window, game->menu.end_score, NULL);
}