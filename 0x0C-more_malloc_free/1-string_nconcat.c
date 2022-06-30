#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 * Return: pointer to the allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *o;
	unsigned int a, b, lsout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	if (n > b)
		n = b;

	lsout = a + n;

	o = malloc(lsout + 1);

	if (o == NULL)
		return (NULL);

	for (i = 0; i < lsout; i++)
		if (i < a)
			o[i] = s1[i];
		else
			o[i] = s2[i - a];

	o[i] = '\0';

	return (o);
}
