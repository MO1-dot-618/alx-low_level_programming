#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp, *new;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (ht->array[index] == NULL)
			return (0);
		ht->array[index]->key = strdup(key);
		if (!ht->array[index]->key)
		{
			free(ht->array[index]);
			return (0);
		}
		ht->array[index]->value = strdup(value);
		if (!ht->array[index]->value)
		{
			free(ht->array[index]);
			return (0);
		}
		ht->array[index]->next = NULL;
	}
	else
	{
		temp = ht->array[index];
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		new->key = strdup(key);
		if (!new->key)
		{
			free(new);
			return (0);
		}
		new->value = strdup(value);
		if (!new->value)
		{
			free(new);
			return (0);
		}
		new->next = temp;
		ht->array[index] = new;
	}
	return (1);
}
