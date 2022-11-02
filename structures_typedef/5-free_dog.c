#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free all dog
 * @d: structure
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->owner);
free(d->name);
free(d);
}
}
