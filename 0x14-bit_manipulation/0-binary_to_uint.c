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
int i, len = 0;

if (!b)
return (0);

while (b[len] != '\0')
{
if (b[len] != '0' && b[len] != '1')
return (0);

len++;
}
for (i = 0; i < len; i++)
{
u <<= 1;
if (b[i] == '1')
u |= 1;
}
return (u);

}
