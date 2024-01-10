#include "lists.h"
/**
* add_dnodeint_end - a function that adds a new
* node at the end of a dlistint_t list.
* @head: head
* @n: value
* Return: the address of the new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *x;
dlistint_t *nv;
nv = malloc(sizeof(dlistint_t));
if (nv == NULL)
return (NULL);
nv->n = n;
nv->next = NULL;
x = *head;
if (x != NULL)
{
while (x->next != NULL)
x = x->next;
x->next = nv;
}
else
{
*head = nv;
}
nv->prev = x;
return (nv);
}
