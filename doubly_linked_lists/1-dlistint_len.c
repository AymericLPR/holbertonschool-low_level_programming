#include "lists.h"

/**
 *dlistint_len - number of elements
 *@h: pointer
 *Return: Always 0.
 */

size_t dlistint_len(const dlistint_t *h)
{
int num = 0;
while (h)
{
h = h->next;
num++;
}
return (num);
}
