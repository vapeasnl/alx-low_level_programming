#include "lists.h"
/**
* insert_dnodeint_at_index - Write a function
* that inserts a new node at a given position.
* @h: head
* @idx: index
* @n: value
* Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *nv;
dlistint_t *index;
unsigned int i;
nv = NULL;
if (idx == 0)
nv = add_dnodeint(h, n);
else
{
index = *h;
i = 1;
if (index != NULL)
while (index->prev != NULL)
index = index->prev;
while (index != NULL)
{
if (i == idx)
{
if (index->next == NULL)
nv = add_dnodeint_end(h, n);
else
{
nv = malloc(sizeof(dlistint_t));
if (nv != NULL)
{
nv->n = n;
nv->next = index->next;
nv->prev = index;
index->next->prev = nv;
index->next = nv;
}
}
break;
}
index = index->next;
i++;
}
}
return (nv);
}

