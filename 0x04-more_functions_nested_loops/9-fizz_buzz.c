#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100, followed by a new line,
 * but for multiples of three prints Fizz instead of the number, and
 * for the multiples of five prints` Buzz, while for numbers which
 * are multiples of both three and five prints FizzBuzz.
 * Return: Always 0 (Success).
 */

int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FIZZBUZZ");
		}
		else if (n % 3 == 0)
		{
			printf(" FIZZ");
		}
		else if (n % 5 == 0)
		{
			printf(" BUZZ");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}
