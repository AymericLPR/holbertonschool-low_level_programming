#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node in a linked listat index pos
 *@head: pointer head
 *@idx: index
 *@n: data
 *Return: Always 0.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new;
listint_t *stock = *head;

new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (i = 0; stock && i < idx; i++)
{
if (i == idx - 1)
{
new->next = stock->next;
stock->next = new;
return (new);
}
else
stock = stock->next;
}
return (NULL);
}
