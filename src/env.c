/*
** EPITECH PROJECT, 2017
** env
** File description:
** Abel
*/

#include "../include/hunter.h"

int check_display(char *str)
{
	char disp[7] = "DISPLAY";

	for (int i = 0; str[i] == disp[i]; i++) {
		if (disp[i] == 'Y')
			return (1);
	}
	return (0);
}

int env(char **env)
{
	for (int i = 0; env[i] != NULL; i++) {
		if (check_display(env[i]) == 1)
			return (1);
	}
	return (0);
}
