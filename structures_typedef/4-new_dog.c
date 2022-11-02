#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - new dog
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doge;
int i, x, y;

doge = malloc(sizeof(dog_t));
if (doge == NULL)
return (NULL);
i = strlen(name) + 1;
x = strlen(owner) + 1;

doge->name = malloc(sizeof(char) * i);
if ((*doge).name == NULL)
{
free(doge);
return (NULL);
}
for (y = 0; y < i; y++)
{
doge->name[y] = name[y];
}

doge->age = age;

doge->owner = malloc(sizeof(char) * x);
if ((*doge).owner == NULL)
{
free(doge->name);
free(doge);
return (NULL);
}
for (y = 0; y < x; y++)
{
doge->owner[y] = owner[y];
}

return (doge);
}
