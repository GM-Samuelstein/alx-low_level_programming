#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: Input string.
 * Return:Always integer. 0 if otherwise.
 */

int _atoi(char *s)
{
	unsigned int i = 0, size = 0, oi = 0, pn = 1, m = 1, x;

	while (*(s + i) != '\0')
	{
		if (size > 0 && (*(s + i) < '0' || *(s + i) > '9'))
		{
			break;
		}
		if (*(s + i) == '-')
		{
			pn *= -1;
		}
		if ((*(s + i) >= '0') && (*(s + i) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		i++;
	}

	for (x = i - size; x < i; x++)
	{
		oi = oi + ((*(s + x) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
