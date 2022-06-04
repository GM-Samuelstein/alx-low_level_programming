#include <stdio.h>

/**
 * main - This programme prints all possible combination of
 * two digits numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, x;

	i = 48;
	x = 48;

	while (x < 58)
	{
		i = 48;
		while (i < 58)
		{
			putchar(x);
			putchar(i);
			if (i == 57 && x == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			i++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
