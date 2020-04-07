/*
** EPITECH PROJECT, 2019
** drawing.c
** File description:
** Thomas Olry's drawing.c made the 11/09/2019
*/

#include "../include/hunter.h"

void draw_sprite(sfRenderWindow *window, hunter_t *hunter)
{
    DRAW(window, hunter->back_sprite);
    DRAW_RECT(window, hunter->health_bar);
    DRAW_TEXT(window, hunter->points);
    DRAW_TEXT(window, hunter->p_score);
    DRAW(window, hunter->sprite);
    DRAW(window, hunter->crosshair_s);

}

void draw_menu(sfRenderWindow *window, hunter_t *hunter)
{
    DRAW(window, hunter->back_sprite);
    DRAW_RECT(window, hunter->start);
    DRAW_RECT(window, hunter->exit);
    DRAW_TEXT(window, hunter->text);
    DRAW_TEXT(window, hunter->starter);
    DRAW_TEXT(window, hunter->exiter);
    set_outline_button(window, hunter->start);
    set_outline_button(window, hunter->exit);
}

void draw_pause(sfRenderWindow *window, hunter_t *hunter)
{
    draw_sprite(window, hunter);
    DRAW_RECT(window, hunter->resume);
    DRAW_RECT(window, hunter->main_menu);
    DRAW_RECT(window, hunter->exit_pause);
    DRAW_TEXT(window, hunter->pause);
    DRAW_TEXT(window, hunter->resume_but);
    DRAW_TEXT(window, hunter->menu_but);
    DRAW_TEXT(window, hunter->exit_but);
    set_outline_button(window, hunter->resume);
    set_outline_button(window, hunter->main_menu);
    set_outline_button(window, hunter->exit_pause);
}

void draw_over(sfRenderWindow *window, hunter_t *hunter)
{
    draw_sprite(window, hunter);
    DRAW_RECT(window, hunter->main_menu);
    DRAW_RECT(window, hunter->exit_pause);
    DRAW_TEXT(window, hunter->pause);
    DRAW_TEXT(window, hunter->menu_but);
    DRAW_TEXT(window, hunter->exit_but);
    set_outline_button(window, hunter->main_menu);
    set_outline_button(window, hunter->exit_pause);
}
