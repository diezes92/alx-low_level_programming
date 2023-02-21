#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c);
int main(void)
{
int tab[] = {95, 112, 117, 116, 99, 104, 97, 114};
int i;
for (i = 0; i <= 7; i++)
{
_putchar(tab[i]);
}
_putchar('\n');
return (0);
}
