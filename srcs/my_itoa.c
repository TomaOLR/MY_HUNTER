/*
** EPITECH PROJECT, 2019
** my_itoa.c
** File description:
** Thomas Olry's my_itoa.c made the 11/19/2019
*/

#include "../include/hunter.h"

int my_strlen(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

char *my_revstr(char *str)
{
    int i = my_strlen(str) - 1;
    int j = 0;
    char box;

    while (j < i) {
        box = str[i];
        str[i] = str[j];
        str[j] = box;
        i--;
        j++;
    }
    return (str);
}

char *my_strstr(char *str1, char *str2)
{
    int size = my_strlen(str1) + my_strlen(str2);
    char *str3 = malloc(sizeof(char) * (size + 2));
    int i = 0;

    for (;str1[i]; i++)
        str3[i] = str1[i];
    for (int j = 0; str2[j]; j++, i++)
        str3[i] = str2[j];
    str3[i] = '\0';
    return (str3);
}

int len_int(int nb)
{
    int len = 0;

    if (nb < 0) {
        len++;
        nb *= -1;
    }
    for (; nb > 0; len++, nb /= 10);
    return (len);
}

char *my_itoa(int nb)
{
    int len = len_int(nb);
    char *res = malloc(sizeof(char) * len + 3);
    int i = 0;

    for (; nb > 0; i++) {
        res[i] = nb % 10 + '0';
        nb /= 10;
    }
    res[i] = nb % 10 + '0';
    res[i] = '\0';
    res = my_revstr(res);
    return (res);
}
