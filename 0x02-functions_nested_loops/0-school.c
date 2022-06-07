#include "school.h"

/**
 * main - iwef
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int str[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
	int count, a;

	a = sizeof(str) / sizeof(int);
	for (count = 0; count < a; count++)
	{
		_putchar(str[count]);
	}
	-putchar('\n');
	return (0);
}
