#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @array: Input array.
 * @n: Number of elements in the array.
 * Return: No return.
 */

void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			k = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = k;
		}
	}
}
