#include <stdio.h>

/**
 * main - This programme prints all possible combinatione of
 * two digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, x, y, z, a, b;

i = x = y = z = 48;
while (z < 58)
{
	y = 48;
	while (y < 58)
	{
		x = 48;
		while (x < 58)
		{
			i = 48;
			while (i < 58)
			{
				a = (z * 10) + y;
				b = (x * 10) + i;
				if (a < b)
				{
					putchar(z);
					putchar(y);
					putchar(' ');
					putchar(x);
					putchar(i);
					if (z == 57 && y == 56 && x == 57 && i == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			x++;
		}
		y++;
	}
	z++;
}
putchar('\n');
return (0);
}
