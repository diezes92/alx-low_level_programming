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
int j = 0;
while (j <= 9)
{
putchar(i);
i++;
j++;
if (j == 10)
{}
else
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
