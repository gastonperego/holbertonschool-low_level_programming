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
	const char *v_copy;
	const char *k_copy;
	hash_node_t *new;
	hash_node_t *tmp;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	k_copy = strdup(key);
	v_copy = strdup(value);
	index = (hash_djb2((unsigned char *)key)) % ht->size;
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	
	new->key = (char *)k_copy;
	new->value = (char *)v_copy;
	tmp = ht->array[index];

	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		while (tmp != NULL)
		{
			if (key == tmp->key)
				break;
			tmp = tmp->next;
		}
		if (tmp == NULL)
		{
		new->next = ht->array[index];
		ht->array[index] = new;
		}
		else
			tmp->value = (char *)v_copy;
	}

	return (1);
}
