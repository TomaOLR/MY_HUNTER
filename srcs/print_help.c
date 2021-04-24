/*
** EPITECH PROJECT, 2019
** print_help.c
** File description:
** Thomas Olry's print_help.c made the 11/12/2019
*/

#include "../include/hunter.h"

int print_help(void)
{
    my_putstr("\e[31;4mMY_HUNTER:\e[0m \e[31;1m./USAGE:\e[0m\n");
    my_putstr("           \e[33;3mright click :\e[0m");
    my_putstr("  \e[31;1mshot\e[0m\n");
    my_putstr("                \e[33;3mescape :\e[0m");
    my_putstr("  \e[31;1mpause\e[0m\n");
    my_putstr("                     \e[33;3mM :\e[0m");
    my_putstr("  \e[31;1mMute\e[0m\n");
    my_putstr("                     \e[33;3mU :\e[0m");
    my_putstr("  \e[31;1mUnmute\e[0m\n");
    my_putstr("           \e[31;1mYour Goal:\n");
    my_putstr("\e[33;1mYou are a hunter, During your hunt\n");
    my_putstr("you see an incalculable number of duck\n");
    my_putstr("your goal is to kill a maximum number of duck\e[0m\n");
    my_putstr("\e[31;1mGood Luck Hunter !!!!\e[0\nm");
    return (EXIT_SUCCESS);
}

int print_error(void)
{
    my_putstr("\e[31;4mMY_HUNTER:\e[0m \e[31;1m./USAGE:\e[0m\n");
    my_putstr("              \e[33;3mhelp :\e[0m");
    my_putstr("  \e[31;1m-h  --help\e[0m\n");
    my_putstr("       \e[33;3m./my_hunter :\e[0m");
    my_putstr("  \e[31;1mlaunch the game\e[0m\n");
    return (EXIT_SUCCESS);
}
