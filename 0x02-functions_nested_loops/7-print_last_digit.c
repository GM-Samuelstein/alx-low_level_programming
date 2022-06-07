#include "school.h"

/**
 *
 *
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
	{
		_putchar(-x + 48);
		return (-x);
	}
	else
	{
		_putchar(x + 48);
		return (x);
	}
}
