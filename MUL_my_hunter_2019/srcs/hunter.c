/*
** EPITECH PROJECT, 2019
** hunter.c
** File description:
** Thomas Olry's hunter.c made the 11/09/2019
*/

#include "../include/hunter.h"

sfRenderWindow *open_window(int height, int width, int pixel)
{
    sfRenderWindow *window;
    sfVideoMode mode = {height, width, pixel};

    window = sfRenderWindow_create(mode, "My_Hunter", sfResize | sfClose, NULL);

    return (window);
}

int my_hunter(void)
{
    hunter_t *hunter = set_all();
    sfRenderWindow *window = open_window(1920, 1080, 32);
    int x = 0;

    setting(hunter);
    sfRenderWindow_setFramerateLimit(window, 30);
    while (sfRenderWindow_isOpen(window)) {
        while (x == 0)
            x = menu(window, hunter);
        while (x == 1)
            x = the_game(window, hunter);
        while (x == 3)
            x = menu_pause(window, hunter, x);
        while (x == 4)
            x = game_over(window, hunter, x);
        if (x == 2)
            sfRenderWindow_close(window);
    }
    destroy_all(window, hunter);
    return (EXIT_SUCCESS);
}

int main(int ac, char **av)
{
    if (ac == 1 && my_hunter() == EXIT_FAILURE)
        return (EXIT_FAILURE);
    if ((ac == 2) && (HELP == 0))
        print_help();
    else if ((ac == 2) && (HELP != 0))
        print_error();
}
