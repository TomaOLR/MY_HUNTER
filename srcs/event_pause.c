/*
** EPITECH PROJECT, 2019
** event_pause.c
** File description:
** Thomas Olry's event_pause.c made the 12/01/2019
*/

#include "../include/hunter.h"

void music_pause(hunter_t *hunter)
{
    sfMusic_stop(hunter->m_game);
    sfMusic_stop(hunter->m_pause);
    sfMusic_play(hunter->music);
}

int events_pause_menu(sfRenderWindow *window, sfEvent event, hunter_t *h, int x)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtMouseButtonPressed) {
            x = eventpause(event, h);
            if (event_pause(h->main_menu, event.mouseButton, 0) == 0) {
                sfSprite_setPosition(h->sprite, set(-200, rand() % 900));
                music_pause(h);
                sfRectangleShape_setSize(h->health_bar, set(200, 20));
                h->points = set_text(h, "0", 50, set(1100, 10));
                h->score = 0;
                h->index = 10;
                h->live = 3;
                x = 0;
            }
        }
        if (event.type == sfEvtClosed)
            x = 2;
    }
    mute_sound(h);
    return (x);
}

int eventpause(sfEvent event, hunter_t *hunter)
{
    int x = 0;

    if (event_pause(hunter->exit_pause, event.mouseButton, 2) == 2)
        x = 2;
    if (event_pause(hunter->resume, event.mouseButton, 1) == 1) {
        sfMusic_stop(hunter->m_pause);
        sfMusic_play(hunter->m_game);
        x = 1;
    }
    return (x);
}
