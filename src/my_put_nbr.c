/*
** EPITECH PROJECT, 2017
** my_putnbr
** File description:
** projet par abel
*/

#include "../include/hunter.h"
#include <unistd.h>
#include <stdlib.h>

char *ret(int len, int j, int nb, char *str)
{
	for (int i = len - 1; nb > 0; i--) {
		if (nb >= 10) {
			j = nb % 10;
			nb = (nb - j) / 10;
			str[i] = (char) 48 + j;
		} else {
			str[i] = 48 + nb;
			str[len] = '\0';
			nb = nb / 10;
		}
	}
	return (str);
}

char *my_put_nbr(int nb)
{
	int tmp = nb;
	char *str;
	int len = 0;
	int j = 0;

	if (nb == 0)
		return ("0");
	while (tmp > 0) {
		tmp = tmp / 10;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	str = ret(len, j, nb, str);
	return (str);
}
