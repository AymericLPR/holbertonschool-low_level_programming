#include "lists.h"

/**
 *listint_len - number of elements
 *@h: pointer
 *Return: Always 0.
 */

size_t listint_len(const listint_t *h)
{
int num = 0;
while (h)
{
h = h->next;
num++;
}
return (num);
}
