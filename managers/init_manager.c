/*
** EPITECH PROJECT, 2020
** INIT MANAGER
** File description:
** Init resoures for this project
*/

#include "../include/game_manager.h"

void init_music(game_t *game)
{
    game->cursor.sound = sfSound_create();
    game->cursor.soundbuffer = sfSoundBuffer_createFromFile(
        "./ressources/gun.ogg");
    sfSound_setBuffer(game->cursor.sound, game->cursor.soundbuffer);
}

void init_textures3(game_t *game)
{
    game->textures.game_over = sfTexture_createFromFile(
        "./ressources/gameOverButton.png", NULL);
    game->textures.you_win = sfTexture_createFromFile(
        "./ressources/youwin.png", NULL);
    game->menu.pause = sfSprite_create();
    game->textures.pause = sfTexture_createFromFile(
        "./ressources/pause.png", NULL);
    sfSprite_setTexture(game->menu.pause, game->textures.pause, sfTrue);
    game->textures.continue_bouton = sfTexture_createFromFile(
        "./ressources/continueButton.png", NULL);
}

void init_textures2(game_t *game)
{
    game->textures.quit_bouton = sfTexture_createFromFile(
        "./ressources/quitButton.png", NULL);
    game->textures.easy_bouton = sfTexture_createFromFile(
        "./ressources/easyButton.png", NULL);
    game->textures.normal_bouton = sfTexture_createFromFile(
        "./ressources/normalButton.png", NULL);
    game->textures.hard_bouton =sfTexture_createFromFile(
        "./ressources/hardButton.png", NULL);
    game->textures.ultra_hardcore_bouton =sfTexture_createFromFile(
        "./ressources/ultraHardcoreButton.png", NULL);
    game->textures.try_again_bouton = sfTexture_createFromFile(
        "./ressources/tryAgainButton.png", NULL);
    game->textures.wl_background = sfTexture_createFromFile(
        "./ressources/win_loose_background.jpg", NULL);
    game->textures.wl_quit_bouton = sfTexture_createFromFile(
        "./ressources/wlQuitButton.png", NULL);
    game->textures.main_menu_bouton = sfTexture_createFromFile(
        "./ressources/mainMenuButton.png", NULL);
    init_textures3(game);
}

void init_textures(game_t *game)
{
    game->textures.bird = sfTexture_createFromFile(
        "./ressources/bird.png", NULL);
    game->textures.bird_reverse = sfTexture_createFromFile(
        "./ressources/bird_reverse.png", NULL);
    game->textures.ingame = sfTexture_createFromFile(
        "./ressources/ingame_background.jpg", NULL);
    game->textures.menu = sfTexture_createFromFile(
        "./ressources/menu_background.png", NULL);
    game->cursor.sprite = sfSprite_create();
    game->cursor.texture = sfTexture_createFromFile(
        "./ressources/cross.png", NULL);
    sfSprite_setTexture(game->cursor.sprite, game->cursor.texture, sfTrue);
    sfSprite_setScale(game->cursor.sprite, (sfVector2f) {0.1,0.1});
    game->cursor.vector = (sfVector2f) {0.1,0.1};
    game->textures.difficulty_bouton = sfTexture_createFromFile(
        "./ressources/difficultyButton.png", NULL);
    game->textures.play_bouton = sfTexture_createFromFile(
        "./ressources/playButton.png", NULL);
    init_textures2(game);
}