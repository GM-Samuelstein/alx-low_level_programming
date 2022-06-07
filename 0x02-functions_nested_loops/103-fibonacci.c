#include <stdio.h>

/**
 * main - Finds and prints the sum of the even-valued terms,
 * in the fibonacci sequence, followed by a new line.
 *
 * Return: Always (0) Success.
 */

int main(void)
{
	long int a, b, c, d;

	a = 1;
	b = 2;
	c = d = 0;

	while (c <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if ((a % 2) == 0)
		{
			d += a;
		}

	}
	printf("%ld\n", d);
	return (0);
}
