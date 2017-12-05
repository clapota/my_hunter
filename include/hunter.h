#include <SFML/Audio.h>
#include <SFML/Graphics.h>

typedef struct duck {
	sfSprite *sprite;
	float speed;
	sfVector2f pos;
	sfIntRect rect;
} duck_t;

#ifndef HUNTER_H
#define HUNTER_H
int env(char **env);
void my_putstr(char *);
void printhelp(void);
void put_highscore(int score);
void set_text(sfText **score, char *string, sfRenderWindow *);
int my_strlen(char *str);
int my_factor(int nb, int n);
char *my_put_nbr(int i);
int my_get_nbr(char *str);
int event_management(duck_t *duck, sfEvent *event);
void backflip(sfVector2f *pos);
void play_game(sfRenderWindow *window, sfEvent event, duck_t duck, sfSprite *background);
void event_analyse(sfRenderWindow *window, sfEvent *event, duck_t *duck, int *);
void place_sprite(int i, ...);
void drawsprites(sfRenderWindow *window, sfSprite *sprite, sfIntRect rect, sfSprite *background);
int is_shoot(sfVector2f pos, sfMouseButtonEvent event);
sfSprite *define_sprite(sfSprite *sprite, char *texturename);
void initialize_duck(duck_t *duck);
void Animate_duck(sfIntRect *rect, sfVector2f *position, sfClock *clock, float speed);
void destroy(sfRenderWindow *, sfSprite *, sfSprite *);
sfIntRect define_rect(sfIntRect rect);
#endif
