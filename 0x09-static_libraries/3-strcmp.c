#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string.
 * @s2: Second string.
 * Return: 0 If s1 and s2 are equal. 1 If otherwise.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, x = 0;

	while (x == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
		{
			break;
		}
		x = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (x);
}
