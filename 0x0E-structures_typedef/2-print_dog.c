#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print dog
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
