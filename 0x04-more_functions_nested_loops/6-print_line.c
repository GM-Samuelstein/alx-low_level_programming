#include "main.h"

/**
 * print_line - Draws a straight line on the terminal,
 * by printing the character '_' n times.
 * @n: Number of times the character '_' should be printed.
 * Return: Always 0 (success).
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
