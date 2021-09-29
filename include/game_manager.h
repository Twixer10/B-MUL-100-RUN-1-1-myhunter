/*
** EPITECH PROJECT, 2020
** STRUCTURE OF GAME MANAGER
** File description:
** NO DESCRIPTION FOUND
*/

#ifndef GAME_MANAGER_H_
#define GAME_MANAGER_H_
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>

typedef enum game_state_h {
    MENU = 0,
    INGAME = 1,
    PAUSE = 2,
    WIN = 3,
    LOOSE = 4,
    CLOSE = 5,
    DIFFICULTY = 6
} game_state_t;

typedef enum bird_state_h {
    LOADING = 0,
    SPAWNED = 1,
    DEAD = 2
} bird_state_t;

typedef enum bird_direction_h {
    LEFT_TO_RIGHT = 0,
    RIGHT_TO_LEFT = 1,
} bird_direction_t;

typedef struct dificulty_manager_h
{
    char *name;
    int nbr_bird;
    int attempt;
    double speed_min;
    double speed_max;
    double pitch;
    sfBool isDiscrible;
    char * describe;
} dificulty_t;

typedef struct scene_manager_h
{
    sfSprite *background;
    sfTexture *current;
    sfText *display_score_d;
    sfText *display_score;
} scene_t;

typedef struct user_manager_h
{
    char *pseudo;
    int missed_shot;
    int score;
    sfText *diplay;
} user_t;

typedef struct hight_score_h
{
    char *c_easy;
    char *c_normal;
    char *c_hard;
    char *c_uhc;
    int i_easy;
    int i_normal;
    int i_hard;
    int i_uhc;
} hight_score_t;

typedef struct textures_manager_h
{
    sfTexture *menu;
    sfTexture *ingame;
    sfTexture *bird;
    sfTexture *bird_reverse;
    sfTexture *play_bouton;
    sfTexture *quit_bouton;
    sfTexture *difficulty_bouton;
    sfTexture *easy_bouton;
    sfTexture *normal_bouton;
    sfTexture *hard_bouton;
    sfTexture *ultra_hardcore_bouton;
    sfTexture *wl_quit_bouton;
    sfTexture *try_again_bouton;
    sfTexture *main_menu_bouton;
    sfTexture *game_over;
    sfTexture *wl_background;
    sfTexture *you_win;
    sfTexture *continue_bouton;
    sfTexture *pause;
} textures_t;

typedef struct menu_manager_h
{
    sfSprite *play_bouton;
    sfSprite *quit_bouton;
    sfSprite *difficulty_bouton;
    sfSprite *easy_bouton;
    sfSprite *normal_bouton;
    sfSprite *hard_bouton;
    sfSprite *ultra_hardcore_bouton;
    sfSprite *wl_quit;
    sfSprite *try_again_bouton;
    sfSprite *main_menu_bouton;
    sfSprite *you_win;
    sfSprite *game_over;
    sfSprite *continue_bouton;
    sfSprite *pause;
    sfText *describe;
    sfText *disp_difficulty;
    sfText *end_score;
} menu_t;

typedef struct cursor_manager_h
{
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f vector;
    sfSoundBuffer *soundbuffer;
    sfSound *sound;
} cursor_t;

typedef struct obj_bird_h
{
    bird_state_t state;
    sfSprite *sprite;
    sfVector2f position;
    sfIntRect rect;
    double speed;
    bird_direction_t direction;
} bird_t;

typedef struct clock_manager_h
{
    sfClock *clock;
    sfTime time;
    float seconds;
} my_clock_t;

typedef struct game_manager_h
{
    sfRenderWindow *window;
    sfEvent event;
    sfMusic *theme;
    game_state_t state;
    cursor_t cursor;
    menu_t menu;
    dificulty_t dificulty;
    my_clock_t clock;
    bird_t *birds;
    scene_t scenes;
    textures_t textures;
    user_t user;
    hight_score_t hight_score;
    sfFont *font;
} game_t;

void update_background(game_t *game_t);
void set_cursor(game_t *game_t, sfBool bools);
void update_cursor(game_t *game_t);
void display_menu(game_t *g);
void init_windows(game_t *g);
void play_bouton(game_t *game_t);
void switch_music(game_t *game, char *new_music);
void switch_back_ground(game_t *game, sfTexture *texture);
void fire(game_t *game_t);
void fire_bouton(game_t *game_t);
bird_t new_bird(game_t *game);
void update_bird(game_t *game_t);
void click_on_bird(game_t *game_t);
void set_dificulty(game_t *game_t, char *name, int nbr_bird, int attempt);
void malloc_bird(game_t *game_t);
void remake_bird(game_t *game_t);
void init_birds(game_t *game_t);
void button_close(game_t *game);
void loop_menu(game_t *game);
void loop_in_game(game_t *game);
void init_menu(game_t *game);
void init_music(game_t *game);
void init_textures(game_t *game);
int my_random(int min, int max);
void over_play_bouton(game_t *game);
void over_difficulty_bouton(game_t *game);
void difficulty_bouton(game_t *game);
void over_quit_bouton(game_t *game);
void quit_bouton(game_t *game);
void set_position_difficulty(game_t *game);
void display_difficulty(game_t *game);
void loop_difficulty(game_t *game);
void over_uhc_bouton(game_t *game);
void uhc_bouton(game_t *game);
void over_hard_bouton(game_t *game);
void hard_bouton(game_t *game);
void over_normal_bouton(game_t *game);
void normal_bouton(game_t *game);
void over_easy_bouton(game_t *game);
void easy_bouton(game_t *game);
void display_describe(game_t *game);
void description_found(game_t *game);
void check_loose(game_t *game);
void check_win(game_t *game);
void loop_loose(game_t *game);
void over_main_menu_bouton(game_t *game);
void main_menu_bouton(game_t *game);
void over_wl_quit_bouton(game_t *game);
void wl_quit_bouton(game_t *game);
void over_try_again_bouton(game_t *game);
void try_again_bouton(game_t *game);
void display_wl(game_t *game, sfSprite *cdt);
void set_position_wl(game_t *game, sfSprite *cdt, int i);
void set_position_menu(game_t *game);
void loop_win(game_t *game);
void end_game(game_t *game);
void loop_close(game_t *game);
void srpites_delete(game_t *game);
void text_delete(game_t *game);
void textures_delete(game_t *game);
void sound_delete(game_t *game);
void display_score(game_t *game);
void loop_pause(game_t *game);
void over_continue_bouton(game_t *game);
void continue_bouton(game_t *game);
void pause(game_t *game);
void unpause(game_t *game);
void display_pause_btn(game_t *game);
void set_position_other(game_t *game);
void unpause_key(game_t *game);
void compare_score(game_t *game);
void score_uhc(game_t *game, sfBool bool);
void score_hard(game_t *game, sfBool bool);
void score_normal(game_t *game, sfBool bool);
void score_easy(game_t *game, sfBool bool);
void display_end_score(game_t *game);
void add_load_score(game_t *game, int i);
void store_scores_c(char *path, char *to_store);
void store_scores_i(char *path, int to_store);
char *read_line(char *path);
void add_store_score(game_t *game, int i);
void store_score(game_t *game);
void load_score(game_t *game);
void init_menu_part2(game_t *game);
#define DESCRIPTION_EASY "Easy\n\nNumber of birds: 5\nNumber of tries: 8\nBird"
#define DESCRIPTION_EASY2 "Speed: Verry Slow"
#define DESCRIPTION_NORMAL "Normal\n\nNumber of birds: 10\nNumber of tries: 10"
#define DESCRIPTION_NORMAL2 "\nBird Speed: Slow"
#define DESCRIPTION_HARD "Hard\n\nNumber of birds: 20\nNumber of tries: 5\nBird"
#define DESCRIPTION_HARD2 "Speed: Fast"
#define DESCRIPTION_UHC "Ultra Hard Core\n\nNumber of birds: 30\nNumber of trie"
#define DESCRIPTION_UHC2 "s: 1\nBird Speed: Verry Fast"

#define HELP_DESCRIPTION "\nUSAGE\n\t./my_hunter nickname\n\nDESCRIPTION"
#define HELP_DESCRIPTION2 "\n\tnickname   is an alphanumeric parameter of up"
#define HELP_DESCRIPTION3 "to 20 characters\n\n\nUSER INTERACTIONS\n\nESCAPE KEY"
#define HELP_DESCRIPTION4 "\t Pause / Unpause the game\n"

#endif /* !GAME_MANAGER_H_ */
