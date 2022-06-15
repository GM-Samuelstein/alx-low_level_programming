#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination.
 * @src: Source.
 * Return: The pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int i1 = 0, i2 = 0;

	while (*(dest + i1) != '\0')
	{
		i1++;
	}
	while (i2 >= 0)
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
