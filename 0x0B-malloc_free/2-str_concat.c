#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: A pointer to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated.
 * Return NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j, k, max;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}

	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		s[k] = s1[k];

	max = j;
	for (j = 0; j <= max; k++, j++)
		s[k] = s2[j];

	return (s);
}
