/*
** EPITECH PROJECT, 2017
** is_shoot
** File description:
** Abel
*/

#include "../include/hunter.h"

int is_shoot(sfVector2f pos, sfMouseButtonEvent pos_mouse)
{
	if (pos_mouse.button == sfMouseLeft &&
	   pos_mouse.x > pos.x - 115 && pos_mouse.x < pos.x + 115)
		if (pos_mouse.y > pos.y - 115 && pos_mouse.y < pos.y + 115)
			return (1);
	if (pos_mouse.button == sfMouseLeft)
		return (2);
	return (0);
}
