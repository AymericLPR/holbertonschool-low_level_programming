#ifndef HEADER_H
#define HEADER_H

/**
 * struct dog - create a structure with dog's informations
 * init dog - create dog's informatoins
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
