/*
** EPITECH PROJECT, 2019
** add_croshair.c
** File description:
** Thomas Olry's add_croshair.c made the 11/13/2019
*/

#include "../include/hunter.h"

void add_crosshair(sfRenderWindow *window, hunter_t *hunter)
{
    sfVector2i pos = sfMouse_getPositionRenderWindow(window);
    sfVector2f posi;

    posi.x = pos.x - 64;
    posi.y = pos.y - 64;
    sfSprite_setPosition(hunter->crosshair_s, posi);
}

void live(hunter_t *hunter)
{
    if (hunter->live == 2)
        sfRectangleShape_setSize(hunter->health_bar, set(150, 20));
    if (hunter->live == 1)
        sfRectangleShape_setSize(hunter->health_bar, set(100, 20));
    if (hunter->live == 0)
        sfRectangleShape_setSize(hunter->health_bar, set(50, 20));
    if (hunter->live == -1)
        sfRectangleShape_setSize(hunter->health_bar, set(0, 20));
}
