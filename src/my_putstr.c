/*
** EPITECH PROJECT, 2017
** putstr
** File description:
** Abel
*/

#include <unistd.h>
#include "../include/hunter.h"

void my_putstr(char *str)
{
	int i = my_strlen(str);

	write(1, str, i);
}
