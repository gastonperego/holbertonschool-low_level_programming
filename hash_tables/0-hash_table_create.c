#include "hash_tables.h"
/**
 * hash_table_create- creates a hash table
 *
 * @size: size of he table
 *
 * Return: pointer to the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;
	unsigned long int count = 0;

	ptr = malloc(sizeof(hash_table_t));

	if (ptr == NULL)
		return (NULL);

	ptr->array = malloc((sizeof(hash_node_t) * size));
	ptr->size = size;

	return (ptr);
}
