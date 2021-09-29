/*
** EPITECH PROJECT, 2020
** WINDOWS MANAGER
** File description:
** NO DESCRIPTION
*/

#include "../include/my.h"
#include "../include/game_manager.h"


void display_menu(game_t *game)
{
    sfRenderWindow_drawSprite(game->window, game->menu.play_bouton, NULL);
	sfRenderWindow_drawSprite(game->window, game->menu.difficulty_bouton, NULL);
	sfRenderWindow_drawSprite(game->window, game->menu.quit_bouton, NULL);
	sfRenderWindow_drawText(game->window, game->menu.disp_difficulty, NULL);
	sfRenderWindow_drawText(game->window, game->user.diplay, NULL);

}

void set_position_menu(game_t *game)
{
    sfSprite_setPosition(game->menu.play_bouton, (sfVector2f) {1508, 450});
	sfSprite_setPosition(game->menu.difficulty_bouton,
	(sfVector2f) {1053, 600});
	sfSprite_setPosition(game->menu.quit_bouton, (sfVector2f) {1533, 750});
	sfSprite_setPosition(game->menu.continue_bouton, (sfVector2f) {1308, 250});
	sfText_setPosition(game->menu.disp_difficulty, (sfVector2f) {0, 0});
	sfText_setPosition(game->user.diplay, (sfVector2f) {0, 24});
	sfText_setPosition(game->menu.describe, (sfVector2f) {300, 500});
	sfText_setPosition(game->scenes.display_score, (sfVector2f) {0, 0});
	sfText_setPosition(game->scenes.display_score_d, (sfVector2f) {135, 0});
	sfText_setPosition(game->menu.end_score, (sfVector2f) {150, 650});
}

void init_text(game_t *game)
{
	game->menu.disp_difficulty = sfText_create();
	game->scenes.display_score = sfText_create();
	game->scenes.display_score_d = sfText_create();
	game->user.diplay = sfText_create();
    sfText_setString(game->menu.disp_difficulty, game->dificulty.name);
	sfText_setString(game->scenes.display_score, "Your Score: ");
	sfText_setString(game->scenes.display_score_d, "0");
	sfText_setString(game->user.diplay, my_strcat("Username: ",
	game->user.pseudo));
	sfText_setString(game->menu.end_score, "");
	sfText_setCharacterSize(game->menu.disp_difficulty, 24);
	sfText_setCharacterSize(game->scenes.display_score, 24);
	sfText_setCharacterSize(game->scenes.display_score_d, 24);
	sfText_setCharacterSize(game->user.diplay, 24);
	sfText_setCharacterSize(game->menu.end_score, 27);
	sfText_setFont(game->menu.disp_difficulty, game->font);
	sfText_setFont(game->scenes.display_score, game->font);
	sfText_setFont(game->scenes.display_score_d, game->font);
	sfText_setFont(game->user.diplay, game->font);
	sfText_setFont(game->menu.end_score, game->font);
}

void init_menu_two(game_t *game)
{
    sfSprite_setTexture(game->menu.play_bouton, game->textures.play_bouton,
	sfTrue);
	sfSprite_setTexture(game->menu.difficulty_bouton,
	game->textures.difficulty_bouton, sfTrue);
	sfSprite_setTexture(game->menu.quit_bouton, game->textures.quit_bouton,
	sfTrue);
	sfSprite_setTexture(game->menu.easy_bouton, game->textures.easy_bouton,
	sfTrue);
	sfSprite_setTexture(game->menu.normal_bouton, game->textures.normal_bouton,
	sfTrue);
	sfSprite_setTexture(game->menu.hard_bouton, game->textures.hard_bouton,
	sfTrue);
	init_menu_part2(game);
	init_text(game);
	set_position_menu(game);
}

void init_menu(game_t *game)
{
	game->menu.play_bouton = sfSprite_create();
	game->menu.difficulty_bouton = sfSprite_create();
	game->menu.easy_bouton = sfSprite_create();
	game->menu.hard_bouton = sfSprite_create();
	game->menu.normal_bouton = sfSprite_create();
	game->menu.quit_bouton = sfSprite_create();
	game->menu.ultra_hardcore_bouton = sfSprite_create();
	game->menu.wl_quit = sfSprite_create();
	game->menu.game_over = sfSprite_create();
	game->menu.you_win = sfSprite_create();
	game->menu.main_menu_bouton = sfSprite_create();
	game->menu.try_again_bouton = sfSprite_create();
	game->menu.continue_bouton = sfSprite_create();
	game->menu.describe = sfText_create();
	game->menu.disp_difficulty = sfText_create();
	game->menu.end_score = sfText_create();
	set_position_difficulty(game);
	game->birds = NULL;
	game->font = sfFont_createFromFile("./ressources/LLPIXEL3.ttf");
	init_menu_two(game);
}
