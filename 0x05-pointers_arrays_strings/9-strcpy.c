#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by str, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: Destination.
 * @src: Source.
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
		{
			break;
		}
		i++;
	}
	return (dest);
}
