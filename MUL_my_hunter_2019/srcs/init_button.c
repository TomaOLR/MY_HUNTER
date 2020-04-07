/*
** EPITECH PROJECT, 2019
** init_button.c
** File description:
** Thomas Olry's init_button.c made the 11/14/2019
*/

#include "../include/hunter.h"

sfRectangleShape *init_button(sfVector2f pos, sfVector2f size, sfColor color)
{
    sfRectangleShape *rect;

    rect = sfRectangleShape_create();
    sfRectangleShape_setFillColor(rect, color);
    sfRectangleShape_setOutlineColor(rect, sfWhite);
    sfRectangleShape_setOutlineThickness(rect, 0);
    sfRectangleShape_setSize(rect, size);
    sfRectangleShape_setPosition(rect, pos);

    return (rect);
}

void set_outline_button(sfRenderWindow *window, sfRectangleShape *rect)
{
    sfVector2f pos = sfRectangleShape_getPosition(rect);
    sfVector2f size = sfRectangleShape_getSize(rect);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(window);
    sfVector2f mouse_pos;

    mouse_pos.x = mouse.x;
    mouse_pos.y = mouse.y;

    if (mouse_pos.x > pos.x && mouse_pos.x < pos.x + size.x &&
        mouse_pos.y > pos.y && mouse_pos.y < pos.y + size.y)
        sfRectangleShape_setOutlineThickness(rect, 3.5);
    else
        sfRectangleShape_setOutlineThickness(rect, 0);
}

int exit_button( sfRectangleShape *rect, sfMouseButtonEvent evt)
{
    sfVector2f pos = sfRectangleShape_getPosition(rect);
    sfVector2f size = sfRectangleShape_getSize(rect);

    if (evt.x > pos.x && evt.x < pos.x + size.x &&
        evt.y > pos.y && evt.y < pos.y + size.y)
        return (2);
    return (0);
}
