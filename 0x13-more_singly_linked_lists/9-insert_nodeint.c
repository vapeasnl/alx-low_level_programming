#include "lists.h"
/**
* insert_nodeint_at_index - a function that inserts
* a new node at a given position
* @head: the first node
* @idx: index
* @n: data to insert
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *nouv;
listint_t *tmp = *head;
nouv = malloc(sizeof(listint_t));
if (!nouv || !head)
return (NULL);
nouv->n = n;
nouv->next = NULL;
if (idx == 0)
{
nouv->next = *head;
*head = nouv;
return (nouv);
}
for (i = 0; tmp && i < idx; i++)
{
if (i == idx - 1)
{
nouv->next = tmp->next;
tmp->next = nouv;
return (nouv);
}
else
tmp = tmp->next;
}
return (NULL);
}
