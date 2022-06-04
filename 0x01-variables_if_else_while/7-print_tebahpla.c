#include <stdio.h>

/**
 * main - This programme prints the letters of the alphabet
 * in lowercase and in reverse order.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 26; i > 0; i--)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
