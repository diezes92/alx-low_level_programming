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
putchar('\n');
return (0);
}
