#include <stdio.h>

/**
 *
 *
 *
 */

int main(void)
{
	int a;
	long int b, c, d;

	b = 1;
	c = 2;
	printf("%ld, %ld", a, b);
	for (i = 0; i < 48; i++)
	{
		d = b + c;
		printf(", %ld", d);
		b = c;
		c = d;
	}
	printf('\n');
	return (0);
}
