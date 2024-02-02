#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
* shash_table_create - Creates a sorted hash table.
* @size: The size of new sorted hash table.
* Return: If an error occurs - NULL.
*Otherwise - a pointer to the new sorted hash table.
*/
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *thash;
unsigned long int i;
thash = malloc(sizeof(shash_table_t));
if (thash == NULL)
return (NULL);
thash->size = size;
thash->array = malloc(sizeof(shash_node_t *) * size);
if (thash->array == NULL)
return (NULL);
for (i = 0; i < size; i++)
thash->array[i] = NULL;
thash->shead = NULL;
thash->stail = NULL;
return (thash);
}

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *nv, *temp;
char *vc;
unsigned long int idx;
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
vc = strdup(value);
if (vc == NULL)
return (0);
idx = key_index((const unsigned char *)key, ht->size);
temp = ht->shead;
while (temp)
{
if (strcmp(temp->key, key) == 0)
{
free(temp->value);
temp->value = vc;
return (1);
}
temp = temp->snext;
}
nv = malloc(sizeof(shash_node_t));
if (nv == NULL)
{
free(vc);
return (0);
}
nv->key = strdup(key);
if (nv->key == NULL)
{
free(vc);
free(nv);
return (0);
}
nv->value = vc;
nv->next = ht->array[idx];
ht->array[idx] = nv;
if (ht->shead == NULL)
{
nv->sprev = NULL;
nv->snext = NULL;
ht->shead = nv;
ht->stail = nv;
}
else if (strcmp(ht->shead->key, key) > 0)
{
nv->sprev = NULL;
nv->snext = ht->shead;
ht->shead->sprev = nv;
ht->shead = nv;
}
else
{
temp = ht->shead;
while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
temp = temp->snext;
nv->sprev = temp;
nv->snext = temp->snext;
if (temp->snext == NULL)
ht->stail = nv;
else
temp->snext->sprev = nv;
temp->snext = nv;
}
return (1);
}

/**
* shash_table_get - Retrieve the value associated with
*                   a key in a sorted hash table.
* @ht: A pointer to the sorted hash table.
* @key: The key to get the value of.
* Return: If the key cannot be matched - NULL.
*         Otherwise - the value associated with key in ht.
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
shash_node_t *n;
unsigned long int idx;
if (ht == NULL || key == NULL || *key == '\0')
return (NULL);
idx = key_index((const unsigned char *)key, ht->size);
if (idx >= ht->size)
return (NULL);
n = ht->shead;
while (n != NULL && strcmp(n->key, key) != 0)
n = n->snext;
return ((n == NULL) ? NULL : n->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *n;
if (ht == NULL)
return;
n = ht->shead;
printf("{");
while (n != NULL)
{
printf("'%s': '%s'", n->key, n->value);
n = n->snext;
if (n != NULL)
printf(", ");
}
printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *n;
if (ht == NULL)
return;
n = ht->stail;
printf("{");
while (n != NULL)
{
printf("'%s': '%s'", n->key, n->value);
n = n->sprev;
if (n != NULL)
printf(", ");
}
printf("}\n");
}

/**
* shash_table_delete - Deletes a sorted hash table.
* @ht: A pointer to the sorted hash table.
*/
void shash_table_delete(shash_table_t *ht)
{
shash_table_t *index = ht;
shash_node_t *n, *temp;
if (ht == NULL)
return;
n = ht->shead;
while (n)
{
temp = n->snext;
free(n->key);
free(n->value);
free(n);
n = temp;
}
free(index->array);
free(index);
}
