#include "hash_tables.h"
/**
 * hash_table_delete - Hash function to delete a table
 * @ht: table to be deleted
 * Return: always successful
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			while (ht->array[index])
			{
				temp = ht->array[index];
				free(temp->value);
				free(temp->key);
				ht->array[index] = ht->array[index]->next;
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
