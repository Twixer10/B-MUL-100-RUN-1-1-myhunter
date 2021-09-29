/*
** EPITECH PROJECT, 2020
** WIN AND LOOSE OPTIONS
** File description:
** NO DESCRIPTION FOR YOU
*/

#include "../include/game_manager.h"

void display_wl(game_t *game, sfSprite *cdt)
{
    sfRenderWindow_drawSprite(game->window, cdt, NULL);
	sfRenderWindow_drawSprite(game->window, game->menu.try_again_bouton, NULL);
	sfRenderWindow_drawSprite(game->window, game->menu.main_menu_bouton, NULL);
	sfRenderWindow_drawSprite(game->window, game->menu.wl_quit, NULL);
}

void set_position_wl(game_t *game, sfSprite *cdt, int i)
{
	int a = (i==4?337:399);

	set_position_other(game);
	sfSprite_setPosition(cdt, (sfVector2f) {a, 250});
}

void set_position_other(game_t *game)
{
	sfSprite_setPosition(game->menu.pause, (sfVector2f) {529, 200});
	sfSprite_setPosition(game->menu.continue_bouton, (sfVector2f) {1173, 600});
	sfSprite_setPosition(game->menu.main_menu_bouton, (sfVector2f) {1257, 750});
	sfSprite_setPosition(game->menu.quit_bouton, (sfVector2f) {572, 900});
}