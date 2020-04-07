/*
** EPITECH PROJECT, 2019
** hunter.h
** File description:
** Thomas Olry's hunter.h made the 11/09/2019
*/

#ifndef HUNTER_H_
#define HUNTER_H_

#define EXIT_FAILURE 84
#define EXIT_SUCCESS 0
#define HELP my_strcmp("-h", av[1]) == 0 || my_strcmp("--help", av[1])
#define DRAW(window, sprite) sfRenderWindow_drawSprite(window, sprite, NULL);
#define DRAW_TEXT(window, text) sfRenderWindow_drawText(window, text, NULL);
#define DRAW_RECT(w, r) sfRenderWindow_drawRectangleShape(w, r, NULL);
#define CREATE_TEXTURE(file) sfTexture_createFromFile(file, NULL);
#define SET_TEXTURE(sprite, textur) sfSprite_setTexture(sprite, textur, sfTrue)

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

typedef struct hunter_s {
    sfSprite *sprite;
    sfSprite *back_sprite;
    sfTexture *texture;
    sfTexture *back;
    sfText *text;
    sfFont *font;
    sfIntRect rect;
    sfEvent event;
    sfVector2f offset;
    sfClock *clock;
    sfTime time;
    float seconds;
    int live;
    int score;
    sfTexture *crosshair;
    sfSprite *crosshair_s;
    sfRectangleShape *start;
    sfRectangleShape *exit;
    sfRectangleShape *resume;
    sfRectangleShape *exit_pause;
    sfRectangleShape *main_menu;
    sfRectangleShape *health_bar;
    sfText *pause;
    sfText *starter;
    sfText *exiter;
    sfText *resume_but;
    sfText *menu_but;
    sfText *exit_but;
    sfText *points;
    sfText *p_score;
    sfText *game_ov;
    sfText *restart;
    sfVector2f pos;
    sfVector2f repos;
    sfMusic *shot;
    sfMusic *music;
    sfMusic *m_game;
    sfMusic *m_pause;
    sfClock *clocker;
    sfTime timer;
    float sec;
    int index;
} hunter_t;

int menu(sfRenderWindow *window, hunter_t *hunter);
int the_game(sfRenderWindow *window, hunter_t *hunter);
int menu_pause(sfRenderWindow *window, hunter_t *hunter, int x);
int game_over(sfRenderWindow *window, hunter_t *hunter, int x);

int my_strcmp(char const *s1, char const *s2);
int my_putstr(char const *str);

char *my_revstr(char *str);
char *my_strstr(char *str1, char *str2);
int len_int(int nb);
char *my_itoa(int nb);

void draw_sprite(sfRenderWindow *window, hunter_t *hunter);
void draw_menu(sfRenderWindow *window, hunter_t *hunter);
void draw_pause(sfRenderWindow *window, hunter_t *hunter);
void draw_over(sfRenderWindow *window, hunter_t *hunter);

int analyse_events(sfRenderWindow *window, sfEvent event, hunter_t *hunter);
int analyse_events_menu(sfRenderWindow *window, sfEvent event, hunter_t *hun);
int the_event(sfRenderWindow *window, sfEvent event, hunter_t *hunter);
void event_menu(hunter_t *hunter);
void mute_sound(hunter_t *hunter);

int events_pause_menu(sfRenderWindow *w, sfEvent evt, hunter_t *hun, int x);
int eventpause(sfEvent event, hunter_t *hunter);

void game(sfRenderWindow *window, hunter_t *hunter);
void main_menu(sfRenderWindow *window, hunter_t *hunter);
void pause_menu(sfRenderWindow *window, hunter_t *hunter);
void over_menu(sfRenderWindow *window, hunter_t *hunter);

sfRenderWindow *open_window(int height, int width, int pixel);
int my_hunter();

sfRectangleShape *init_button(sfVector2f pos, sfVector2f size, sfColor color);
void set_outline_button(sfRenderWindow *window, sfRectangleShape *rect);
int exit_button( sfRectangleShape *rect, sfMouseButtonEvent evt);

void set_variable(hunter_t *hunter);
void set_clock(hunter_t *hunter);
void set_pos(hunter_t *hunter);
void setting(hunter_t *hunter);
sfVector2f set(int x, int y);

void destroy_all(sfRenderWindow *window, hunter_t *hunter);

void set_texture(hunter_t *hunter);
void set_sprite(hunter_t *hunter);
hunter_t *set_all(void);

void sprite_move(hunter_t *hunter);
void move_rect(sfIntRect *rect, int offset, int max_value);
sfIntRect set_rect(void);

int print_help(void);
int print_error(void);

void add_crosshair(sfRenderWindow *window, hunter_t *hunter);
void live(hunter_t *hunter);

sfText *set_text(hunter_t *hunter, char *str, float size, sfVector2f pos);

int event_pause(sfRectangleShape *rect, sfMouseButtonEvent evt, int ret);

void manage_mouse_click(sfMouseButtonEvent event, hunter_t *h);

#endif /* HUNTER_H_ */
