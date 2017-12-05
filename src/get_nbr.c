/*
** EPITECH PROJECT, 2017
** get_nbr
** File description:
** Abel
*/

#include "../include/hunter.h"

int my_get_nbr(char *str)
{
	int j = 0;
	int res = 0;
	int len = my_strlen(str);

	while (str[j] != '\0') {
		int i = my_factor(10, len - j - 1);

		res = res + (str[j] - 48) * i;
		j++;
	}
	return (res);
}
