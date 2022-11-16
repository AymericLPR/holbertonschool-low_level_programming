#include "lists.h"

/**
 * free_list - free list
 * @head: head
 * Return: Always 0.
 */

void free_list(list_t *head)
{
list_t *clean;

while (head)
{
clean = head;
head = head->next;
free(clean->str);
free(clean);
}
}
