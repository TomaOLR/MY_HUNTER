/*
** EPITECH PROJECT, 2019
** event.c
** File description:
** Thomas Olry's event.c made the 11/09/2019
*/

#include "../include/hunter.h"

int the_event(sfRenderWindow *window, sfEvent event, hunter_t *hunter)
{
        while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtMouseButtonPressed)
            manage_mouse_click(event.mouseButton, hunter);
        if (event.type == sfEvtClosed)
            return (2);
        if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
            sfMusic_pause(hunter->m_game);
            sfMusic_play(hunter->m_pause);
            return (3);
        }
        mute_sound(hunter);
    }        return (1);
}

int analyse_events(sfRenderWindow *window, sfEvent event, hunter_t *hunter)
{
    srand(time(NULL));
    sfVector2f pos = sfSprite_getPosition(hunter->sprite);
    sfVector2f repos;
    int x = 1;
    repos.x = -100;
    repos.y = rand() % 900;

    x = the_event(window, event, hunter);
    if (pos.x > 2000) {
        sfSprite_setPosition(hunter->sprite, repos);
        hunter->live -= 1;
        live(hunter);
    }
    if (hunter->live == -1)
        return (4);
    return (x);
}

void event_menu(hunter_t *hunter)
{
    sfMusic_play(hunter->m_game);
    sfMusic_stop(hunter->music);
}

int analyse_events_menu(sfRenderWindow *window, sfEvent event, hunter_t *hunter)
{
    sfVector2f pos = sfRectangleShape_getPosition(hunter->start);
    sfVector2f size = sfRectangleShape_getSize(hunter->start);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    sfVector2f mouse_pos;
    mouse_pos.x = mouse.x;
    mouse_pos.y = mouse.y;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (mouse_pos.x > pos.x && mouse_pos.x < pos.x + size.x &&
            mouse_pos.y > pos.y && mouse_pos.y < pos.y + size.y &&
            event.type == sfEvtMouseButtonPressed) {
            event_menu(hunter);
            return (1);
        }
        if (event.type == sfEvtMouseButtonPressed)
            return (exit_button(hunter->exit, event.mouseButton));
        if (event.type == sfEvtClosed)
            return (2);
        mute_sound(hunter);
    }
    return (0);
}

void mute_sound(hunter_t *hunter)
{
    if (sfKeyboard_isKeyPressed(sfKeyM)) {
        sfMusic_setVolume(hunter->music, 0);
        sfMusic_setVolume(hunter->m_game, 0);
        sfMusic_setVolume(hunter->m_pause, 0);
        sfMusic_setVolume(hunter->shot, 0);
    } else if (sfKeyboard_isKeyPressed(sfKeyU)) {
        sfMusic_setVolume(hunter->music, 8);
        sfMusic_setVolume(hunter->m_game, 8);
        sfMusic_setVolume(hunter->m_pause, 15);
        sfMusic_setVolume(hunter->shot, 15);
    }
}
