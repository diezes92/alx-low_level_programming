#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
int ld = 0, ls = 0, i = 0;

while (dest[ld] != '\0')
ld++;
while (src[ls] != '\0')
ls++;
for (i = ld; i <= ld + ls; i++)
dest[i] = src[(i - ld)];

return (dest);
}
