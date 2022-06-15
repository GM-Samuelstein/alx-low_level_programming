#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: Input string.
 * Return: The pointer to dest.
 */

char *leet(char *s)
{
	int x = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + x) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + x) == low_letters[i] || *(s + x) == upp_letters[i])
			{
				*(s + x) = numbers[i];
				break;
			}
		}
		x++;
	}
	return (s);
}
