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
unsigned int result = 0;
unsigned int bit_value = 1;
int len = 0;

if (b == NULL)
return (0);
while (b[len] != '\0')
{
if (b[len] != '0' && b[len] != '1')
return (0);
len++;
}
for (int i = len - 1; i >= 0; i--)
{
if (b[i] == '1')
result += bit_value;
bit_value *= 2;
}

return (result);
}

