#include "lists.h"

/**
 * free_dlistint - free list
 * @head: head
 * Return: Always 0.
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *clean;

while (head)
{
clean = head;
head = head->next;
free(clean);
}
}
