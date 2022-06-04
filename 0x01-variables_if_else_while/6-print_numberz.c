#include <stdio.h>

/**
 * main - This programme prints all single digits of base 10,
 * starting from 0.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
