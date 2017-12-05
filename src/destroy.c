/*
** EPITECH PROJECT, 2017
** Destroy
** File description:
** Abel
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>

void destroy(sfRenderWindow *window, sfSprite *sprite, sfSprite *background)
{
	sfRenderWindow_destroy(window);
	sfSprite_destroy(sprite);
	sfSprite_destroy(background);
}
