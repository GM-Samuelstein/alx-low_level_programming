#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: Inpuut integer.
 * Return: No return.
 */

void print_number(int n)
{
	unsigned int a, b, x;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
	}

	b = a;
	x = 1;

	while (b > 9)
	{
		b /= 10;
		x *= 10;
	}
	for (; x >= 1; x /= 10)
	{
		_putchar(((a / x) % 10) + 48);
	}
}
