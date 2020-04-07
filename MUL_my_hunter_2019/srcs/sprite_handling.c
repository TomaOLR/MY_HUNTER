/*
** EPITECH PROJECT, 2019
** sprite_handling.c
** File description:
** Thomas Olry's sprite_handling.c made the 11/09/2019
*/

#include "../include/hunter.h"

void sprite_move(hunter_t *hunter)
{
    hunter->offset = sfSprite_getPosition(hunter->sprite);
    hunter->timer = sfClock_getElapsedTime(hunter->clocker);
    hunter->sec = hunter->timer.microseconds / 100000.0;
    if (hunter->sec > 0.01) {
        hunter->offset.x += hunter->index;
        sfSprite_setPosition(hunter->sprite, hunter->offset);
        sfClock_restart(hunter->clocker);
    }
}

sfIntRect set_rect(void)
{
    sfIntRect rect;

    rect.top = 0;
    rect.left = 0;
    rect.width = 110;
    rect.height = 110;

    return (rect);
}

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left = rect->left + offset;
    if (rect->left == max_value)
        rect->left = 0;
}
