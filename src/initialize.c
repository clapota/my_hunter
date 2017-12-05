/*
** EPITECH PROJECT, 2017
** Initialize
** File description:
** Abel
*/

#include "../include/hunter.h"

void initialize_duck(duck_t *duck)
{
	duck->sprite = define_sprite(duck->sprite, "src/spritesheet.png");
	duck->pos.x = 0;
	duck->pos.y = 100;
	duck->rect = define_rect(duck->rect);
	duck->speed = 0.1;
}
