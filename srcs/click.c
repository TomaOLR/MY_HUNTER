/*
** EPITECH PROJECT, 2019
** click.c
** File description:
** Thomas Olry's click.c made the 11/15/2019
*/

#include "../include/hunter.h"

void manage_mouse_click(sfMouseButtonEvent event, hunter_t *h)
{
    srand(time(NULL));
    h->pos = sfSprite_getPosition(h->sprite);
    h->repos.x = -150;
    h->repos.y = rand() % 900;

    if (event.x < h->pos.x + 110 && event.x > h->pos.x
        && event.y > h->pos.y + 20 && event.y < h->pos.y + 80) {
        if (sfMusic_getStatus(h->shot) == sfStopped)
            sfMusic_stop(h->shot);
        sfMusic_play(h->shot);
        h->score += 1;
        h->points = set_text(h, my_itoa(h->score), 50, set(1100, 10));
        sfSprite_setPosition(h->sprite, h->repos);
        h->index += 1;
    }
}
