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
	hash_table_t *new_hash_table;
	unsigned long int i;

	/*Allocate memory for the new table*/
	new_hash_table = malloc(sizeof(hah_table_t));

	//Check if memory allocation failed
	if (new_hash_table == NULL)
		return (NULL);

	new_hash_table->size = size;

	new_hash_table->array = malloc(sizeof(hash_node_t *) * size); //Allocate Memory to the table array

	if (new_hash_table->array == NULL)
		return (NULL); //Memory Allocation Failed

	for (i = 0; i < size; i++)
	{
		new_hash_table->array[i] = NULL;
	}

	return (new_hash_table);
}
