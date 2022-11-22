#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - A function that creates a hash table.
 * @size: The size of the array of nodes.
 * Return: A pointer to the created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	hash_node_t *node = malloc(sizeof(hash_node_t) * size);

	table->size = size;
	table->array = &node;

	return (table);
}

