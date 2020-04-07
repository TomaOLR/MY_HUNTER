/*
** EPITECH PROJECT, 2019
** set.c
** File description:
** Thomas Olry's set.c made the 11/13/2019
*/

#include "../include/hunter.h"

void set_variable(hunter_t *hunter)
{
    hunter->seconds = 0;
    hunter->live = 3;
    hunter->score = 0;
    hunter->index = 10;
}

void set_clock(hunter_t *hunter)
{
    if (hunter->seconds > 0.1)
    {
        move_rect(&hunter->rect, 110, 330);
        sfClock_restart(hunter->clock);
    }
    hunter->time = sfClock_getElapsedTime(hunter->clock);
    hunter->seconds = hunter->time.microseconds / 1000000.0;
}

void set_pos(hunter_t *hunter)
{
    srand(time(NULL));
    sfVector2f pos;
    pos.x = -250;
    pos.y = rand() % 900;

    hunter->clock = sfClock_create();
    hunter->clocker = sfClock_create();
    sfSprite_setPosition(hunter->sprite, pos);
}

sfVector2f set(int x, int y)
{
    sfVector2f vector;

    vector.x = x;
    vector.y = y;

    return (vector);
}

void setting(hunter_t *hunter)
{
    set_pos(hunter);
    hunter->start = init_button(set(850, 450), set(300, 100), sfBlue);
    hunter->exit = init_button(set(850, 680), set(300, 100), sfBlue);
    hunter->resume = init_button(set(850, 350), set(300, 100), sfBlue);
    hunter->main_menu = init_button(set(850, 580), set(300, 100), sfBlue);
    hunter->exit_pause = init_button(set(850, 810), set(300, 100), sfBlue);
    hunter->health_bar = init_button(set(870, 100), set(200, 20), sfRed);
    hunter->starter = set_text(hunter, "START", 50, set(900, 470));
    hunter->exiter = set_text(hunter, "EXIT", 50, set(920, 700));
    hunter->resume_but = set_text(hunter, "RESTART", 50, set(857, 360));
    hunter->text = set_text(hunter, "MY HUNTER", 100, set(600, 200));
    hunter->points = set_text(hunter, "0", 50, set(1100, 10));
    hunter->p_score = set_text(hunter, "SCORE :", 50, set(800, 10));
    sfMusic_play(hunter->music);
    sfMusic_setVolume(hunter->music, 8);
    sfMusic_setVolume(hunter->m_game, 8);
    sfMusic_setVolume(hunter->m_pause, 15);
    sfMusic_setVolume(hunter->shot, 10);
}
