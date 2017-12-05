/*
** EPITECH PROJECT, 2017
** my_factor
** File description:
** Abel
*/

int my_factor(int nb, int n)
{
	long long int res = nb;

	if (n == 0)
		return (1);
	while (n > 1) {
		res = res * nb;
		n--;
	}
	return (res);
}
