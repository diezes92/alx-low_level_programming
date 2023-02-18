#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = '0';
int j = 1;
while (j <= 10)
{
putchar(i);
i++;
j++;
}
i = 97;
while (i <= 102)
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
