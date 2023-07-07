#include "hash_tables.h"

/**
* hash_table_get - get value based on key
* @ht: hash_table_t pointer
* @key: string
*
* Description: using the key an index is gotten to find
* hash_node_t with the same key
*
* Return: char *
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	idx = key_index((const unsigned char *) key, ht->size);
	tmp = ht->array[idx];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);

		tmp = tmp->next;
	}

	return (NULL);
}
