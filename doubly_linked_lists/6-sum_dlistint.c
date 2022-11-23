#include "lists.h"

/**
 * sum_dlistint - Entry point
 * @head: head
 * Return: Always 0.
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
