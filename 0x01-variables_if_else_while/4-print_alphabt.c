#include <stdio.h>

/**
 * main - This programme prints the letters of the alphabet in lowercase,
 * except the letters '''e''' and '''q'''.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar (alpha[i]);
	}
	putchar ('\n');
	return (0);
}
