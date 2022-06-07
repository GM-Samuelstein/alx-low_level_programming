#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 48; a <= 50; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 53; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if (a >= 50 && b >= 52)
					{
						break;
					}
					_putchar(a);
					_putchar(b);
					_putchar(58);
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}
}
