#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9).
 * @c: input number.
 * Return: 1 If c is a digit. 0 If otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
