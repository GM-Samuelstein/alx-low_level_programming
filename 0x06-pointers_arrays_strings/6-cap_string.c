#include "main.h"

/**
 * cap_string - Capitalizes all letters of a string.
 * @s: Input string.
 * Return: The pointer to dest.
 */

char *cap_string(char *s)
{
	int x = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + x) >= 97 && *(s + x) <= 122)
	{
		*(s + x) = *(s + x) - 32;
	}
	x++;

	while (*(s + x) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + x) == sep_words[i])
			{
				if ((*(s + (x + 1)) >= 97) && (*(s + (x + 1)) <= 122))
				{
					*(s + (x + 1)) = *(s + (x + 1)) - 32;
				}
				break;
			}
		}
		x++;
	}
	return (s);
}
