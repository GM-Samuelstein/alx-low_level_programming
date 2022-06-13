#include "main.h"

/**
 * swap_int - Swaps the value of two integers.
 * @a: First integer.
 * @b: Second integer.
 * Return: No return.
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
