/*
** EPITECH PROJECT, 2019
** basic.c
** File description:
** Thomas Olry's basic.c made the 11/30/2019
*/

#include "../include/hunter.h"

int my_strcmp(char const *s1, char const *s2)
{
    int res1 = 0;
    int res2 = 0;

    if (s1 == s2)
        return (0);
    for (int i = 0; s1[i] != '\0'; i++) {
        res1 = res1 + s1[i];
    }
    for (int i = 0; s2[i] != '\0'; i++) {
        res2 = res2 + s2[i];
    }
    if (res1 < res2)
        return (-1);
    else if (res1 > res2)
        return (1);
    return (0);
}

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write(1, &str[i], 1);
    return (EXIT_SUCCESS);
}
