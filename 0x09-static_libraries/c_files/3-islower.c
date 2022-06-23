#include "main.h"

/**
 * _islower - Checks for lowercase character.
 *
 * @c: ASCII character.
 *
 * Return: 1 If c is lowercase. 0 if otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
