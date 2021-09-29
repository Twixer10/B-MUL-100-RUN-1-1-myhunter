/*
** EPITECH PROJECT, 2020
** MENU MANAGER
** File description:
** NEED FOR RESPECT NORME
*/

#include "../include/game_manager.h"

void init_menu_part2(game_t *game)
{
    sfSprite_setTexture(game->menu.ultra_hardcore_bouton,
	game->textures.ultra_hardcore_bouton, sfTrue);
	sfSprite_setTexture(game->menu.try_again_bouton,
	game->textures.try_again_bouton, sfTrue);
	sfSprite_setTexture(game->menu.main_menu_bouton,
	game->textures.main_menu_bouton, sfTrue);
	sfSprite_setTexture(game->menu.wl_quit, game->textures.wl_quit_bouton,
	sfTrue);
	sfSprite_setTexture(game->menu.game_over, game->textures.game_over, sfTrue);
	sfSprite_setTexture(game->menu.you_win, game->textures.you_win, sfTrue);
	sfSprite_setTexture(game->menu.continue_bouton,
	game->textures.continue_bouton, sfTrue);
}