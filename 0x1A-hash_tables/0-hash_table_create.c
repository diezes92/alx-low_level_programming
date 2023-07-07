#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with a given size
 *
 * @size: size of the hash table
 * Return: the created hash table, or NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab;
	hash_node_t **arr;
	unsigned long int i;

	tab = malloc(sizeof(hash_table_t));
	if (tab == NULL)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = NULL;

	tab->array = arr;
	tab->size = size;

	return (tab);
}
