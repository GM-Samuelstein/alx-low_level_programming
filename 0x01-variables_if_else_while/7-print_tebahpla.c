#include <stdio.h>

/**
 * main - This programme prints the letters of the alphabet
 * in lowercase and in reverse order.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
