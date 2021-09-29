/*
** EPITECH PROJECT, 2020
** SCORE ANIMATION MANAGER
** File description:
** NO DESCRIPTION FOUND FOR YOU
*/

#include "../include/game_manager.h"
#include "../include/my.h"

void score_uhc(game_t *game, sfBool bool)
{
    char *str;

    if (bool) {
        str = my_strcat("This is a new record !\n", game->user.pseudo);
        str = my_strcat(str, "'s score: ");
        str = my_strcat(str, my_itoa(game->user.score));
        game->hight_score.c_uhc = game->user.pseudo;
        game->hight_score.i_uhc = game->user.score;
    } else {
        str = my_strcat("Your", " score: ");
        str = my_strcat(str,
        (game->user.score > 0?my_itoa(game->user.score):"0"));
        str = my_strcat(str, "\nThe best score is from ");
        str = my_strcat(str, game->hight_score.c_uhc);
        str = my_strcat(str, ": ");
        str = my_strcat(str, my_itoa(game->hight_score.i_uhc));
    }
    sfText_setString(game->menu.end_score, str);
}

void score_hard(game_t *game, sfBool bool)
{
    char *str;

    if (bool) {
        str = my_strcat("This is a new record !\n", game->user.pseudo);
        str = my_strcat(str, "'s score: ");
        str = my_strcat(str, my_itoa(game->user.score));
        game->hight_score.c_hard = game->user.pseudo;
        game->hight_score.i_hard = game->user.score;
    } else {
        str = my_strcat("Your", " score: ");
        str = my_strcat(str,
        (game->user.score > 0?my_itoa(game->user.score):"0"));
        str = my_strcat(str, "\nThe best score is from ");
        str = my_strcat(str, game->hight_score.c_hard);
        str = my_strcat(str, ": ");
        str = my_strcat(str, my_itoa(game->hight_score.i_hard));
    }
    sfText_setString(game->menu.end_score, str);
}

void score_normal(game_t *game, sfBool bool)
{
    char *str;

    if (bool) {
        str = my_strcat("This is a new record !\n", game->user.pseudo);
        str = my_strcat(str, "'s score: ");
        str = my_strcat(str, my_itoa(game->user.score));
        game->hight_score.c_normal = game->user.pseudo;
        game->hight_score.i_normal = game->user.score;
    } else {
        str = my_strcat("Your", " score: ");
        str = my_strcat(str,
        (game->user.score > 0?my_itoa(game->user.score):"0"));
        str = my_strcat(str, "\nThe best score is from ");
        str = my_strcat(str, game->hight_score.c_normal);
        str = my_strcat(str, ": ");
        str = my_strcat(str, my_itoa(game->hight_score.i_normal));
    }
    sfText_setString(game->menu.end_score, str);
}

void score_easy(game_t *game, sfBool bool)
{
    char *str;

    if (bool) {
        str = my_strcat("This is a new record !\n", game->user.pseudo);
        str = my_strcat(str, "'s score: ");
        str = my_strcat(str, my_itoa(game->user.score));
        game->hight_score.c_easy = game->user.pseudo;
        game->hight_score.i_easy = game->user.score;
    } else {
        str = my_strcat("Your", " score: ");
        str = my_strcat(str,
        (game->user.score > 0?my_itoa(game->user.score):"0"));
        str = my_strcat(str, "\nThe best score is from ");
        str = my_strcat(str, game->hight_score.c_easy);
        str = my_strcat(str, ": ");
        str = my_strcat(str, my_itoa(game->hight_score.i_easy));
    }
    sfText_setString(game->menu.end_score, str);
}