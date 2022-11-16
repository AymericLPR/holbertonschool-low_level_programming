#include "lists.h"

/**
 * free_listint - free list
 * @head: head
 * Return: Always 0.
 */

void free_listint(listint_t *head)
{
listint_t *clean;

while (head)
{
clean = head;
head = head->next;
free(clean);
}
}
