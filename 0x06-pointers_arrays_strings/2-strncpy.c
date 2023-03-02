#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
int ld = 0, ls = 0, i = 0;

while (dest[ld] != '\0')
ld++;
while (src[ls] != '\0')
ls++;
if (n >= ls)
{
for (i = 0; i <= ls; i++)
dest[i] = src[i];
}
else
{
for (i = 0; i <= n - 1; i++)
dest[i] = src[i];
}
return (dest);
}
