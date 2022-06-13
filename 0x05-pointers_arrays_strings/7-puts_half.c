#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Input string.
 * Return: No return.
 */

void puts_half(char *str)
{
	int i = 0, x;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			break;
		}
		i++;
	}

	if (i % 2 == 1)
	{
		x = i / 2;
	}
	else
	{
		x = (i - 1) / 2;
	}
	for (x++; x < i; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
