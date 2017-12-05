/*
** EPITECH PROJECT, 2017
** printhelp
** File description:
** Abel
*/

#define BUFF_SIZE 4096
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "../include/hunter.h"

void printhelp(void)
{
	int fd = open("Help", O_RDONLY);
	char buffer[BUFF_SIZE];
	int i = read(fd, buffer, BUFF_SIZE);
	
	buffer[i] = '\0';
	my_putstr(buffer);
	close(fd);
}
