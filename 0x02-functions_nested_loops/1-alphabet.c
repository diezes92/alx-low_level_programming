#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int a = 97;
int i = 0;
while (i <= 25)
{
_putchar(a);
a++;
i++;
}
_putchar('\n');
}
