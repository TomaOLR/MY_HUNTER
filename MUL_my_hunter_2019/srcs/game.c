/*
** EPITECH PROJECT, 2019
** game.c
** File description:
** Thomas Olry's game.c made the 11/13/2019
*/

#include "../include/hunter.h"

void game(sfRenderWindow *window, hunter_t *hunter)
{
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    add_crosshair(window, hunter);
    sfRenderWindow_clear(window, sfBlack);
    sfSprite_setTextureRect(hunter->sprite, hunter->rect);
    draw_sprite(window, hunter);
    sprite_move(hunter);
    sfRenderWindow_display(window);
}

void main_menu(sfRenderWindow *window, hunter_t *hunter)
{
    sfRenderWindow_setMouseCursorVisible(window, sfTrue);
    sfRenderWindow_clear(window, sfBlack);
    draw_menu(window, hunter);
    sfRenderWindow_display(window);
}

void pause_menu(sfRenderWindow *window, hunter_t *hunter)
{
    sfRenderWindow_setMouseCursorVisible(window, sfTrue);
    sfRenderWindow_clear(window, sfBlack);
    sfSprite_setTextureRect(hunter->sprite, hunter->rect);
    draw_pause(window, hunter);
    sfRenderWindow_display(window);
}

void over_menu(sfRenderWindow *window, hunter_t *hunter)
{
    sfRenderWindow_setMouseCursorVisible(window, sfTrue);
    sfRenderWindow_clear(window, sfBlack);
    sfSprite_setTextureRect(hunter->sprite, hunter->rect);
    draw_over(window, hunter);
    sfRenderWindow_display(window);
}
