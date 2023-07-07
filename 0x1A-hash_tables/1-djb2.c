#include "hash_tables.h"

/**
 * hash_djb2 - function that generates a random number through
 * a string given (hash number)
 *
 * @str: string
 * Return: hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh;
	int a;

	hsh = 5381;
	while ((a = *str++))
	{
		hsh = ((hsh << 5) + hsh) + a; /* hsh * 33 + a */
	}
	return (hsh);
}
