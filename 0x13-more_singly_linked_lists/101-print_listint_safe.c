#include "lists.h"
#include <stdio.h>
size_t looped_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
* looped_len - Counts the number of unique nodes
* @head: A pointer to the head of the listint_t to check.
* Return: If the list is not looped - 0 
* or the number of unique nodes in the list.
*/
size_t looped_len(const listint_t *head)
{
const listint_t *t, *h;
size_t n = 1;
if (head == NULL || head->next == NULL)
return (0);
t = head->next;
h = (head->next)->next;
while (h)
{
if (t == h)
{
t = head;
while (t != h)
{
n++;
t = t->next;
h = h->next;
}
t = t->next;
while (t != h)
{
n++;
t = t->next;
}
return (n);
}
t = t->next;
h = (h->next)->next;
}
return (0);
}
/**
* print_listint_safe - a function that prints a listint_t linked list.
* @head: A pointer to the head of the listint_t list.
* Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
size_t n, idx = 0;
n = looped_len(head);
if (n == 0)
{
for (; head != NULL; n++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (idx = 0; idx < n; idx++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (n);
}
