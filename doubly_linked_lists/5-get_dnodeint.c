#include "lists.h"

/**
 * get_dnodeint_at_index - Entry point
 * @head: head
 * @index: index
 * Return: Always 0.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

while (head)
{
if (i == index)
return (head);
head = head->next;
i++;
}
return (NULL);
}
