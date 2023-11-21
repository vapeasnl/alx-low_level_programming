#include "lists.h"
/**
* add_nodeint - a function that adds a new node
* at the beginning of a listint_t list.
* @head: the first node in the list
* @n: data to insert
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nouv;
nouv = malloc(sizeof(listint_t));
if (!nouv)
return (NULL);
nouv->n = n;
nouv->next = *head;
*head = nouv;
return (nouv);
}
