#include "main.h"
/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res;
	int lgt, base;

	if (!b)
		return (0);

	res = 0;

	for (lgt = 0; b[lgt] != '\0'; lgt++)
		;

	for (lgt--, base = 1; lgt >= 0; lgt--, base *= 2)
	{
		if (b[lgt] != '0' && b[lgt] != '1')
		{
			return (0);
		}

		if (b[lgt] & 1)
		{
			res += base;
		}
	}

	return (res);
}
