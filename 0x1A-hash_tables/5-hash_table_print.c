#include "hash_tables.h"

/**
 * hash_table_print - prints the keys and values of the hash table
 *
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char *brk;

	if (ht == NULL)
		return;

	printf("{");
	brk = "";

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", brk, tmp->key, tmp->value);
			brk = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
