#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
hash_table_t *index = ht;
hash_node_t *n, *temp;
unsigned long int i;
for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
n = ht->array[i];
while (n != NULL)
{
temp = n->next;
free(n->key);
free(n->value);
free(n);
n = temp;
}
}
}
free(index->array);
free(index);
}
