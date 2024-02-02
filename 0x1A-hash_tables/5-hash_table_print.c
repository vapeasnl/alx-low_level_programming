#include "hash_tables.h"

/**
* hash_table_print - a function that prints a hash table.
* @ht: A pointer to the hash table to print.
*/
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *n;
unsigned long int i;
unsigned char cflag = 0;
if (ht == NULL)
return;
printf("{");
for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
if (cflag == 1)
printf(", ");
n = ht->array[i];
while (n != NULL)
{
printf("'%s': '%s'", n->key, n->value);
n = n->next;
if (n != NULL)
printf(", ");
}
cflag = 1;
}
}
printf("}\n");
}
