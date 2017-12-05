/*
** EPITECH PROJECT, 2017
** my_hunter
** File description:
** Abel
*/

#include "../include/hunter.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdarg.h>
#include <stdlib.h>

void event_analyse(sfRenderWindow *window, sfEvent *event, duck_t *duck, int *score)
{
	static int health = 2;
	
	while (sfRenderWindow_pollEvent(window, event)) {
		if (event->type == sfEvtClosed)
			sfRenderWindow_close(window);
		if (event_management(duck, event) == 1) {
			*score += 1;
			return;
		}
		if (event->type == sfEvtMouseButtonPressed && is_shoot(duck->pos, event->mouseButton) == 2)
			health--;
		if (health == 0)
			sfRenderWindow_close(window);
	}
}

sfSprite *define_sprite(sfSprite *sprite, char *texturename)
{
	sfTexture *Texture;

	Texture = sfTexture_createFromFile(texturename, NULL);
	sprite = sfSprite_create();
	sfSprite_setTexture(sprite, Texture, sfTrue);
	return (sprite);
}

void place_sprite(int i, ...)
{
	va_list list;

	va_start(list, i);
	sfSprite_setPosition(va_arg(list, sfSprite *), va_arg(list, sfVector2f));
	va_end(list);
}

void drawsprites(sfRenderWindow *window, sfSprite *sprite, sfIntRect rect, sfSprite *background)
{
	sfSprite_setTextureRect(sprite, rect);
	sfRenderWindow_drawSprite(window, background, NULL);
	sfRenderWindow_drawSprite(window, sprite, NULL);
}

int main(int ac, char **av, char **ae)
{
	if (env(ae) == 0)
		return (84);
	if (ac == 2) {
		if (av[1][0] == '-' && av[1][1] == 'h') {
			printhelp();		
			return (0);
		}
	}
	
	duck_t duck;
	sfVideoMode mode = {1280, 769, 60};
	sfRenderWindow *window;
	sfEvent event;
	sfSprite *background = define_sprite(background, "background.png");
	
	initialize_duck(&duck);
	window = sfRenderWindow_create(mode, "My_Hunter", sfResize | sfClose, NULL);
	play_game(window, event, duck, background);
	destroy(window, duck.sprite, background);
}
