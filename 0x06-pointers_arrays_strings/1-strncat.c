#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int ld = 0, ls = 0, i = 0;

while (dest[ld] != '\0')
ld++;
while (src[ls] != '\0')
ls++;
if (n >= ls)
{
for (i = ld; i <= ld + ls; i++)
dest[i] = src[(i - ld)];
}
else
{
for (i = ld; i <= ld + n - 1 ; i++)
dest[i] = src[(i - ld)];
dest[i] = '\0';
}

return (dest);
}
