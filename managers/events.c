/*
** EPITECH PROJECT, 2020
** EVENT MANAGER
** File description:
** NO DESCRIPTION FOUND
*/

#include "../include/game_manager.h"
#include "../include/my.h"

void init_windows(game_t *game)
{
    game->state = MENU;
    game->window = sfRenderWindow_create((sfVideoMode) {1920, 1080, 32},
    "Bird Hunter", sfFullscreen, NULL);
    sfRenderWindow_setFramerateLimit(game->window, 60);
    game->scenes.background = sfSprite_create();
    switch_back_ground(game, game->textures.menu);
    game->theme = sfMusic_createFromFile("./ressources/menu_music.ogg");
    sfMusic_play(game->theme);
    sfMusic_setLoop(game->theme, sfTrue);
    game->clock.clock = sfClock_create();
}

void display_score(game_t *game)
{
	sfText_setString(game->scenes.display_score_d,
    ((game->user.score == 0?"0":my_itoa(game->user.score))));
    sfRenderWindow_drawText(game->window, game->scenes.display_score, NULL);
    sfRenderWindow_drawText(game->window, game->scenes.display_score_d, NULL);
}