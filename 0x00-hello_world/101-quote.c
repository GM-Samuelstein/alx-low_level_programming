#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char str1[] = "and that piece is art is useful\" - Dora Korpar, 2015-10-19\n";
        
	write(2, str1, 50);
	return (1);
}
