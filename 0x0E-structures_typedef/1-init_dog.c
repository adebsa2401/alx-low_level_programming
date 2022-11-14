#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - init dog
 * @d: struct dog
 * @name: char*
 * @age: float
 * @owner: char*
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
