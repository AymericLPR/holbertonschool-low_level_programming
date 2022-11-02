#include "function_pointers.h"

/**
 *array_iterator - Entry point
 *@array: array
 *@size: size
 *@action: pointer
 *Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t n;

if (array && size && action)
for (n = 0; n < size; n++)
action(array[n]);
}
