#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - function that allocate memory using malloc
 * @b: size of memory to allocate
 * Return: pointer
*/
void *malloc_checked(unsigned int b)
{
void *ptr  = malloc(b)
if (ptr == NULL)
return (98);

return (ptr);
}