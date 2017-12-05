/*
** EPITECH PROJECT, 2017
** Put_highscore
** File description:
** Abel
*/

#include <stdlib.h>
#include "../include/hunter.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void put_highscore(int score)
{
	int fd = open("Highscore", O_RDONLY);
	char buffer[10];
	int len = 0;
	char *Highscore;

	len = read(fd, buffer, 3);
	buffer[len] = '\0';
	if (score > my_get_nbr(buffer)) {
		close(fd);
		fd = open("Highscore", O_WRONLY);
		Highscore = my_put_nbr(score);
		len = my_strlen(Highscore);
		write(fd, Highscore, len);
		close(fd);
	}
}
