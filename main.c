/*
** EPITECH PROJECT, 2020
** MAIN
** File description:
** MAIN - MY HUNTER
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "./include/my.h"
#include "./include/game_manager.h"

int analyse_params(int ac, char **av, game_t *game)
{
    if(ac == 2 && av[1][1] == 'h' && av[1][0] == '-') {
        my_printf("%s %s %s %s", HELP_DESCRIPTION, HELP_DESCRIPTION2,
        HELP_DESCRIPTION3, HELP_DESCRIPTION4);
        return (0);
    }
    if (ac == 1 || ac > 2) {
        my_printf("./my_hunter: invalid option\n");
        my_printf("Try './my_huner -h' for more information.");
        return (84);
    } else {
        if((my_strlen(av[1]) > 20) && my_str_isprintable(av[1])) {
            my_printf("./my_hunter: character not allowed or size too long\n");
            my_printf("Try './my_huner -h' for more information.");
            return (84);
        } else {
            game->user = (user_t) {av[1], 0, 0, NULL};
        }
    }
    return (1);
}

void init_game(game_t *game)
{
    game->dificulty = (dificulty_t) {"Difficulty: Normal", 10, 12, 0.6, 1.0,
    1.0, sfFalse, ""};
    srand(time(0));
    init_music(game);
    init_textures(game);
    init_menu(game);
    init_windows(game);
    load_score(game);
}

void close_game(game_t *game)
{
    store_score(game);
    sfRenderWindow_destroy(game->window);
    srpites_delete(game);
    text_delete(game);
    textures_delete(game);
    sound_delete(game);
}

int main(int ac, char **av)
{
    int dbg;
    game_t game;
    void (*game_ptr[7])(game_t *) = {&loop_menu, &loop_in_game,
    &loop_pause, &loop_win, &loop_loose, &loop_close, &loop_difficulty};

    dbg = analyse_params(ac, av, &game);
    if (dbg == 84)
        return (84);
    else if (dbg == 0)
        return (0);
    init_game(&game);
    while (sfRenderWindow_isOpen(game.window)) {
        (*game_ptr[game.state])(&game);
    }
    close_game(&game);
    return (0);
}
