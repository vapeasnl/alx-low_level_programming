#include "lists.h"
/**
* add_nodeint_end - a function that adds a new node
* at the end of a listint_t list.
* @head: the first element in the list
* @n: data to insert
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nouv;
listint_t *tmp = *head;
nouv = malloc(sizeof(listint_t));
if (!nouv)
return (NULL);
nouv->n = n;
nouv->next = NULL;
if (*head == NULL)
{
*head = nouv;
return (nouv);
}
while (tmp->next)
tmp = tmp->next;
tmp->next = nouv;
return (nouv);
}
