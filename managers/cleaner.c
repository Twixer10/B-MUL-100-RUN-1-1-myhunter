/*
** EPITECH PROJECT, 2020
** CLEANER
** File description:
** NO DESCRIPTION FOR YOU
*/

#include "../include/game_manager.h"

void srpites_delete(game_t *game)
{
    sfSprite_destroy(game->cursor.sprite);
    sfSprite_destroy(game->menu.difficulty_bouton);
    sfSprite_destroy(game->menu.easy_bouton);
    sfSprite_destroy(game->menu.game_over);
    sfSprite_destroy(game->menu.hard_bouton);
    sfSprite_destroy(game->menu.main_menu_bouton);
    sfSprite_destroy(game->menu.normal_bouton);
    sfSprite_destroy(game->menu.play_bouton);
    sfSprite_destroy(game->menu.quit_bouton);
    sfSprite_destroy(game->menu.try_again_bouton);
    sfSprite_destroy(game->menu.ultra_hardcore_bouton);
    sfSprite_destroy(game->menu.wl_quit);
    sfSprite_destroy(game->menu.you_win);
}

void text_delete(game_t *game)
{
    sfText_destroy(game->menu.disp_difficulty);
    sfText_destroy(game->menu.describe);
}

void textures_delete(game_t *game)
{
    sfTexture_destroy(game->textures.bird);
    sfTexture_destroy(game->textures.bird_reverse);
    sfTexture_destroy(game->textures.difficulty_bouton);
    sfTexture_destroy(game->textures.easy_bouton);
    sfTexture_destroy(game->textures.game_over);
    sfTexture_destroy(game->textures.hard_bouton);
    sfTexture_destroy(game->textures.ingame);
    sfTexture_destroy(game->textures.main_menu_bouton);
    sfTexture_destroy(game->textures.menu);
    sfTexture_destroy(game->textures.normal_bouton);
    sfTexture_destroy(game->textures.play_bouton);
    sfTexture_destroy(game->textures.quit_bouton);
    sfTexture_destroy(game->textures.try_again_bouton);
    sfTexture_destroy(game->textures.ultra_hardcore_bouton);
    sfTexture_destroy(game->textures.wl_background);
    sfTexture_destroy(game->textures.wl_quit_bouton);
    sfTexture_destroy(game->textures.you_win);
}

void sound_delete(game_t *game)
{
    sfMusic_stop(game->theme);
    sfMusic_destroy(game->theme);
    sfSound_destroy(game->cursor.sound);
    sfSoundBuffer_destroy(game->cursor.soundbuffer);
}

void end_game(game_t *game)
{
    game->state = CLOSE;
    sfRenderWindow_close(game->window);
}