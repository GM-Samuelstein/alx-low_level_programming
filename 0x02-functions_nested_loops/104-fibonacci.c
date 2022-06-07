#include <stdio.h>

/**
 * main - Finds and prints the first 98 fibonacci numbers,
 * starting with '1' and '2', followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c;
	long int u, v, w, x, y, z;

	u = 1;
	v = 2;
	b = c = 1;
	printf("%ld, %ld", u, v);
	for (a = 0; a < 96; a++)
	{
		if (b)
		{
			w = u + v;
			printf(", %ld", w);
			u = v;
			v = w;
		}
		else
		{
			if (c)
			{
				y = u % 1000000000;
				z = v % 1000000000;
				u = u / 1000000000;
				v = v / 1000000000;
				c = 0;
			}
			x = (y + z);
			w = u + v + (x / 1000000000);
			printf(", %ld", w);
			printf("%ld", x % 1000000000);
			u = v;
			y = z;
			v = w;
			z = (x % 1000000000);
		}
		if (((u + v) < 0) && b == 1)
			b = 0;
	}
	printf("\n");
	return (0);
}
