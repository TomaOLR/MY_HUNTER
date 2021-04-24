/*
** EPITECH PROJECT, 2019
** destroy.c
** File description:
** Thomas Olry's destroy.c made the 11/18/2019
*/

#include "../include/hunter.h"

void destroy_sprite(hunter_t *hunter)
{
    sfSprite_destroy(hunter->sprite);
    sfSprite_destroy(hunter->back_sprite);
    sfSprite_destroy(hunter->crosshair_s);
    sfTexture_destroy(hunter->texture);
    sfTexture_destroy(hunter->back);
    sfTexture_destroy(hunter->crosshair);
}

void destroy_text(hunter_t *hunter)
{
    sfText_destroy(hunter->text);
    sfText_destroy(hunter->pause);
    sfText_destroy(hunter->starter);
    sfText_destroy(hunter->exiter);
    sfText_destroy(hunter->resume_but);
    sfText_destroy(hunter->menu_but);
    sfText_destroy(hunter->exit_but);
    sfFont_destroy(hunter->font);
}

void destroy_other(hunter_t *hunter)
{
    sfRectangleShape_destroy(hunter->start);
    sfRectangleShape_destroy(hunter->exit);
    sfRectangleShape_destroy(hunter->resume);
    sfRectangleShape_destroy(hunter->exit_pause);
    sfRectangleShape_destroy(hunter->main_menu);
    sfClock_destroy(hunter->clock);
    sfMusic_destroy(hunter->music);
    sfMusic_destroy(hunter->m_game);
    sfMusic_destroy(hunter->m_pause);
    sfMusic_destroy(hunter->shot);
}

void destroy_all(sfRenderWindow *window, hunter_t *hunter)
{
    destroy_sprite(hunter);
    destroy_text(hunter);
    destroy_other(hunter);
    sfRenderWindow_destroy(window);
}
