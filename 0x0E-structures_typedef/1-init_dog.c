#include "dog_h"
#include <stdlib.h>
/**
 * init_dog - a function that initalize a variable
 * @d: pointer
 * @name: member
 * @age: member
 * @owner: member
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
