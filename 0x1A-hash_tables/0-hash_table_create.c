#include "hash_table.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: The size of the array
 *
 * Return: If an error occurs - NULL
 *         Otherwise - a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	if (size == 0)
	{
		return NULL;
	}

	hash_table_t *new_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		return NULL;
	}

	new_table->size = size;

	new_table->array = (hash_node_t **)malloc(sizeof(hash_node_t *)*size);

	if (new_table->array == NULL)
	{
		free(new_table);
		return NULL;
	}

	for (unsigned long int i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}

	return new_table;
}
