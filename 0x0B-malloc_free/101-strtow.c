#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: the two dimensional grid.
 * @height: height of the grid.
 * Return: no return.
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
/**
 * strtow - splits a string into words.
 * @str: input string.
 * Return: a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **a;
	unsigned int i, j, k, height, x;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (x = height = 0; str[x] != '\0'; x++)
		if (str[x] != ' ' && (str[x + 1] == ' ' || str[x + 1] == '\0'))
			height++;
	a = malloc((height + 1) * sizeof(char *));
	if (a == NULL || height == 0)
	{
		free(a);
		return (NULL);
	}
	for (i = k = 0; i < height; i++)
	{
		for (x = k; str[x] != '\0'; x++)
		{
			if (str[x] == ' ')
				k++;
			if (str[x] != ' ' && (str[x + 1] == ' ' || str[x + 1] == '\0'))
			{
				a[i] = malloc((x - k + 2) * sizeof(char));
				if (a[i] == NULL)
				{
					ch_free_grid(a, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; k <= x; k++, j++)
			a[i][j] = str[k];
		a[i][j] = '\0';
	}
	a[i] = NULL;
	return (a);
}
