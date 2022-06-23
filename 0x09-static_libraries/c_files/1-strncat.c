#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Destination.
 * @src: Source.
 * @n: Amount of bytes used from src.
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i1 = 0, i2 = 0;

	while (*(dest + i1) != '\0')
	{
		i1++;
	}

	while (i2 < n)
	{
		*(dest + i1) = *(src + i2);
		if (*(src + i2) == '\0')
		{
			break;
		}
		i1++;
		i2++;
	}
	return (dest);
}
