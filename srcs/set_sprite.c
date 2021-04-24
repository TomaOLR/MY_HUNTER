/*
** EPITECH PROJECT, 2019
** set_sprite.c
** File description:
** Thomas Olry's set_sprite.c made the 11/18/2019
*/

#include "../include/hunter.h"

void set_texture(hunter_t *hunter)
{
    hunter->texture = CREATE_TEXTURE("gameobject/piaf.png");
    hunter->crosshair = CREATE_TEXTURE("gameobject/crosshair.png");
    hunter->back = CREATE_TEXTURE("gameobject/background.jpg");
    hunter->music = sfMusic_createFromFile("gameobject/music.ogg");
    hunter->m_game = sfMusic_createFromFile("gameobject/music_game.ogg");
    hunter->m_pause = sfMusic_createFromFile("gameobject/music_pause.ogg");
    hunter->shot = sfMusic_createFromFile("gameobject/shot.ogg");
    sfMusic_setLoop(hunter->m_pause, sfTrue);
    sfMusic_setLoop(hunter->m_game, sfTrue);
    sfMusic_setLoop(hunter->music, sfTrue);
}

void set_sprite(hunter_t *hunter)
{
    hunter->sprite = sfSprite_create();
    hunter->back_sprite = sfSprite_create();
    hunter->crosshair_s = sfSprite_create();
    SET_TEXTURE(hunter->sprite, hunter->texture);
    SET_TEXTURE(hunter->back_sprite, hunter->back);
    SET_TEXTURE(hunter->crosshair_s, hunter->crosshair);
}

hunter_t *set_all(void)
{
    hunter_t *hunter = malloc(sizeof(hunter_t));

    set_variable(hunter);
    set_texture(hunter);
    set_sprite(hunter);
    hunter->rect = set_rect();
    return (hunter);
}
