/*
** EPITECH PROJECT, 2019
** pause_button.c
** File description:
** Thomas Olry's pause_button.c made the 11/15/2019
*/

#include "../include/hunter.h"

int event_pause(sfRectangleShape *rect, sfMouseButtonEvent evt, int ret)
{
    sfVector2f pos = sfRectangleShape_getPosition(rect);
    sfVector2f size = sfRectangleShape_getSize(rect);

    if (evt.x > pos.x && evt.x < pos.x + size.x &&
        evt.y > pos.y && evt.y < pos.y + size.y)
        return (ret);
    return (3);
}
