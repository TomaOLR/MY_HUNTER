/*
** EPITECH PROJECT, 2019
** text.c
** File description:
** Thomas Olry's text.c made the 11/15/2019
*/

#include "../include/hunter.h"

sfText *set_text(hunter_t *hunter, char *str, float size, sfVector2f pos)
{
    sfText *text;

    hunter->font = sfFont_createFromFile("gameobject/Playtimes.ttf");
    text = sfText_create();
    sfText_setString(text, str);
    sfText_setFont(text, hunter->font);
    sfText_setCharacterSize(text, size);
    sfText_setColor(text, sfYellow);
    sfText_setPosition(text, pos);
    return (text);
}
