#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Input string.
 * Return: Length of input string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}
