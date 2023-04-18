#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print the struct dog
 * @d: structure variable
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return
if (d->name  == NULL)

printf("name:(nill)\n");

else 
printf("Name:%s\n",d->name);

if (d->age < 0)
printf("age: (nill)\n");

else 
printf("Name:%f\n",d->age);

if (d->owner == NULL)
printf("Owner: (nill)\n");

else 
printf("owner:%s\n",d->owner);
}
