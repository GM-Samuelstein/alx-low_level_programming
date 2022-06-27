#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 * Return: a pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int i, j, x, y;

	if (ac == 0)
	{
		return (NULL);
	}

	for (x = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
		{
			x++;
		}
		x++;
	}

	a = malloc((x + 1) * sizeof(char));

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = j = y = 0; y < x; j++, y++)
	{
		if (av[i][j] == '\0')
		{
			a[y] = '\n';
			i++;
			y++;
			j = 0;
		}
		if (y < x - 1)
		{
			a[y] = av[i][j];
		}
	}
	a[y] = '\0';

	return (a);
}
