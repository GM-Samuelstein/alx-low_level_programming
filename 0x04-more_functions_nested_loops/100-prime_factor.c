#include <stdio.h>

/**
 * main - Prints the largest prime factor.
 * Return: Always 0 (Success).
 */

int main(void)
{
	long int n, i;

	n = 612852475143;
	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}
	printf("%ld\n", i);
	return (0);
}
