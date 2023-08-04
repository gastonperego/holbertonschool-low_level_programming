#include "hash_tables.h"
/**
 * hash_table_set- adds an element to a hash table
 *
 * @ht: pointer to hash table
 * @key: key of the new element
 * @value: value of the new element
 *
 * Return: 1 if succeed, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	if (key == NULL || value == NULL)
		return (0);

	index = (hash_djb2((unsigned char *)key)) % ht->size;

	new = malloc(sizeof(hash_node_t));

	new->key = (char *)key;
	new->value = (char *)value;

	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
		ht->array[0] = new;

	return (indeex);
}
