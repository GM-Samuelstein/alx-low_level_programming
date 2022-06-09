#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The input integer.
 * Return: Always 0 (Success).
 */

void print_number(int n)
{
	unsigned int a, b, c;

	if (n < 0)
	{
		_putchar(45);
		a = n  * -1;
	}
	else
	{
		a = n;
	}
	b = a;
	c = 1;

	while (b > 9)
	{
		b /= 10;
		c *= 10;
	}

	for (; c >= 1; c /= 10)
	{
		_putchar(((m / c) % 10) + 48);
	}
}
