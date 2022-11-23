#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a new node in a linked listat index pos
 *@h: pointer head
 *@idx: index
 *@n: data
 *Return: Always 0.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i;
dlistint_t *new;
dlistint_t *stock = *h;

new = malloc(sizeof(dlistint_t));
if (!new || !h)
return (NULL);
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *h;
*h = new;
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
