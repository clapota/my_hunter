/*
** EPITECH PROJECT, 2017
** set_text
** File description:
** Abel
*/

#include "../include/hunter.h"

void set_text(sfText **score, char *string, sfRenderWindow *window)
{
	sfText_setString(*score, string);
	sfText_setCharacterSize(*score, 50);
	sfRenderWindow_drawText(window, *score, NULL);
}
