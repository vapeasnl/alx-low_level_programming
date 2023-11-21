#include "lists.h"
/**
* reverse_listint - a function that reverses a listint_t linked list.
* @head: the first node
* Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = previous;
previous = *head;
*head = next;
}
*head = previous;
return (*head);
}
