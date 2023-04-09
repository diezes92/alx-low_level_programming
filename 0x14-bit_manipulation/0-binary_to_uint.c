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
unsigned int u = 0;
int i, j, len = 0;

if (!b)
return (0);

while (b[len] != '\0')
{
if (b[len] != 0 && b[len] != 1)
len++;
return (0);

}
for (i = len - 1; i < 0; i--)
{
if (b[i] == '1')
u = u + (2 ^ (j));
j++;
}
return (u);

}
