/*
** EPITECH PROJECT, 2017
** def_rect
** File description:
** Abel
*/

#include "../include/hunter.h"

void Animate_duck(sfIntRect *rect, sfVector2f *position, sfClock *clock, float speed)
{
	sfTime time = sfClock_getElapsedTime(clock);
	float seconds = time.microseconds / 1000000.0;

	position->x += speed;
	if (seconds > 0.25 == 1 && rect->left != 220) {
		rect->left += 110;
		sfClock_restart(clock);
		return;
	}
	if (seconds > 0.25 && rect->left == 220) {
		rect->left = 0;
		sfClock_restart(clock);
		return;
	}
}

sfIntRect define_rect(sfIntRect rect)
{
	rect.top = 0;
	rect.left = 0;
	rect.width = 110;
	rect.height = 110;
	return (rect);
}
