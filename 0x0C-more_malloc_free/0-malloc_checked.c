#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: amount of bytes.
 * Return: a pointer to the allocated memory.
 * if malloc fails, it cause normal process termination
 * with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	char *o;

	o = malloc(b);
	if (o == NULL)
		exit(98);
	return (o);
}
