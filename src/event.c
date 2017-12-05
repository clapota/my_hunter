/*
** EPITECH PROJECT, 2017
** event
** File description:
** Abel
*/

#include "../include/hunter.h"
#include <stdlib.h>

int event_management(duck_t *duck, sfEvent *event)
{
	int y;
	
	if (is_shoot(duck->pos, event->mouseButton) == 1) {
		duck->pos.x = 0;
		y = rand() % 500;
		duck->pos.y = y;
	        duck->speed += 0.05;
		return (1);
	}
	return (0);
}
