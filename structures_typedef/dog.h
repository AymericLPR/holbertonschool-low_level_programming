#ifndef HEADER_H
#define HEADER_H

/**
 * struct dog - create a structure with dog's informations
 * init dog - create dog's informatoins
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

typedef struct dog_T
{
char *name;
float age;
char *owner;
} dog_T;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
