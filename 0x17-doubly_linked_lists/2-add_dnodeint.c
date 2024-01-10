#include "lists.h"
/**
* add_dnodeint - a function that adds a new node
* at the beginning of a dlistint_t list.
* @head: head
* @n: value
* Return: the address of the new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *nv;
dlistint_t *x;
nv = malloc(sizeof(dlistint_t));
if (nv == NULL)
return (NULL);
nv->n = n;
nv->prev = NULL;
x = *head;
if (x != NULL)
{
while (x->prev != NULL)
x = x->prev;
}
nv->next = x;
if (x != NULL)
x->prev = nv;
*head = nv;
return (nv);
}
