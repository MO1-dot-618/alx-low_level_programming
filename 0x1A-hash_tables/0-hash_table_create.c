#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: size of the array
 * Return: pointer to the hash table created, or NULL if error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *HT;
	unsigned long int i;

	HT = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (HT)
	{
		HT->size = size;
		HT->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));
		if (HT->array == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
			HT->array[i] = NULL;
	}

	return (HT);
}
