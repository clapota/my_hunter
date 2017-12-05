/*
** EPITECH PROJECT, 2017
** play_game
** File description:
** Abel
*/

#include "../include/hunter.h"

void play_game(sfRenderWindow *window, sfEvent event, duck_t duck, sfSprite *background)
{
	sfClock *clock = sfClock_create();
	int score = 0;
	sfText *Score = sfText_create();
	sfFont *font = sfFont_createFromFile("src/arial_narrow_7.ttf");
	
	sfText_setFont(Score, font);	
	while (sfRenderWindow_isOpen(window)) {
		sfRenderWindow_clear(window, sfBlack);
		event_analyse(window, &event, &duck, &score);
		backflip(&duck.pos);
		place_sprite(2, duck.sprite, duck.pos);
		drawsprites(window, duck.sprite, duck.rect, background);
		set_text(&Score, my_put_nbr(score), window);
		sfRenderWindow_display(window);
		Animate_duck(&duck.rect, &duck.pos, clock, duck.speed);
	}
	put_highscore(score);
	sfText_destroy(Score);
}
