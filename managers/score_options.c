/*
** EPITECH PROJECT, 2020
** SCORE OPTIONS
** File description:
** NO DESCRIPTION FOUND
*/

#include "../include/game_manager.h"
#include "../include/my.h"
#include <stdio.h>


void add_load_score(game_t *game, int i)
{
    if (i == 0)
        game->hight_score.c_easy = read_line("./scores/c_easy.txt");
    if (i == 1)
        game->hight_score.c_normal = read_line("./scores/c_normal.txt");
    if (i == 2)
        game->hight_score.c_hard = read_line("./scores/c_hard.txt");
    if (i == 3)
        game->hight_score.c_uhc = read_line("./scores/c_uhc.txt");
    if (i == 4)
        game->hight_score.i_easy = my_getnbr(read_line("./scores/i_easy.txt"));
    if (i == 5)
        game->hight_score.i_normal = my_getnbr(read_line(
            "./scores/i_normal.txt"));
    if (i == 6)
        game->hight_score.i_hard = my_getnbr(read_line("./scores/i_hard.txt"));
    if (i == 7)
        game->hight_score.i_uhc = my_getnbr(read_line("./scores/i_uhc.txt"));
}

void add_store_score(game_t *game, int i)
{
    if (i == 0)
        store_scores_c("./scores/c_easy.txt", game->hight_score.c_easy);
    if (i == 1)
        store_scores_c("./scores/c_normal.txt", game->hight_score.c_hard);
    if (i == 2)
        store_scores_c("./scores/c_hard.txt", game->hight_score.c_hard);
    if (i == 3)
        store_scores_c("./scores/c_uhc.txt", game->hight_score.c_uhc);
    if (i == 4)
        store_scores_i("./scores/i_easy.txt", game->hight_score.i_easy);
    if (i == 5)
        store_scores_i("./scores/i_normal.txt", game->hight_score.i_normal);
    if (i == 6)
        store_scores_i("./scores/i_hard.txt", game->hight_score.i_hard);
    if (i == 7)
        store_scores_i("./scores/i_uhc.txt", game->hight_score.i_uhc);
}

void store_scores_c(char *path, char *to_store)
{
    FILE *outfile = fopen(path, "w");
    int rtn;

    if (outfile == NULL) {
        my_printf("\nAn error occurred while opening a storage file (%s)\n",
        path);
        return;
    }
    rtn = fwrite(to_store, my_strlen(to_store), 1, outfile);
    if (rtn != 0)
        my_printf("Successful data storage (%s)\n", path);
    else
        my_printf("Data storage failed (%s)\n", path);
    fclose (outfile);
    return;
}

void store_scores_i(char *path, int to_store)
{
    FILE *outfile = fopen(path, "w");
    int rtn;

    if (outfile == NULL) {
        my_printf("\nAn error occurred while opening a storage file (%s)\n",
        path);
        return;
    }
    rtn = fwrite(my_itoa(to_store), get_int_len(to_store), 1, outfile);
    if (rtn != 0)
        my_printf("Successful data storage (%s)\n", path);
    else
        my_printf("Data storage failed (%s)\n", path);
    fclose (outfile);
    return;
}

void store_score(game_t *game)
{
    for (int i = 0; i < 8; i++)
    {
        add_store_score(game, i);
    }
}