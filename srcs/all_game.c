/*
** EPITECH PROJECT, 2019
** all_game.c
** File description:
** Thomas Olry's all_game.c made the 11/30/2019
*/

#include "../include/hunter.h"

int menu(sfRenderWindow *window, hunter_t *hunter)
{
    main_menu(window, hunter);
    return (analyse_events_menu(window, hunter->event, hunter));
}

int the_game(sfRenderWindow *window, hunter_t *hunter)
{
    game(window, hunter);
    set_clock(hunter);
    return (analyse_events(window, hunter->event, hunter));
}

int menu_pause(sfRenderWindow *window, hunter_t *hunter, int x)
{
    hunter->pause = set_text(hunter, "PAUSE", 100, set(750, 150));
    hunter->menu_but = set_text(hunter, "MAIN", 50, set(910, 600));
    hunter->exit_but = set_text(hunter, "EXIT", 50, set(920, 826));
    hunter->resume_but = set_text(hunter, "RESUME", 50, set(857, 360));
    pause_menu(window, hunter);
    return (events_pause_menu(window, hunter->event, hunter, x));
}

int game_over(sfRenderWindow *window, hunter_t *hunter, int x)
{
    hunter->pause = set_text(hunter, "GAME\nOVER", 100, set(800, 300));
    hunter->menu_but = set_text(hunter, "MAIN", 50, set(910, 600));
    hunter->exit_but = set_text(hunter, "EXIT", 50, set(920, 826));
    hunter->resume_but = set_text(hunter, "RESTART", 50, set(857, 360));
    over_menu(window, hunter);
    return (events_pause_menu(window, hunter->event, hunter, x));
}
