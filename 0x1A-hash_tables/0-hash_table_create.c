#include "hash_tables.h"

/**
* hash_table_create - Creates a hash table.
* @size: The size of the array.
* Return: a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *thash;
unsigned long int i;
thash = malloc(sizeof(hash_table_t));
if (thash == NULL)
return (NULL);
thash->size = size;
thash->array = malloc(sizeof(hash_node_t *) * size);
if (thash->array == NULL)
return (NULL);
for (i = 0; i < size; i++)
thash->array[i] = NULL;
return (thash);
}
