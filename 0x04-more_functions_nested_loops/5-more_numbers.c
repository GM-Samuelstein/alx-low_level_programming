#include "main.h"

/**
 * more_numbers - Prints the numbers 0 to 14,
 * 10 times, followed by a new line.
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int a, i;

	for (a = 0; a < 10; a++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
