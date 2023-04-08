#include "main.h"

/**
 * binary_to_unit - converts a binary number to unsigned int
 * main - Entry point
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, n = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			n <<= 1;
			n += b[i] - '0';
			i++;
		}
		else
			return (0);
	}
	return (n);
}
