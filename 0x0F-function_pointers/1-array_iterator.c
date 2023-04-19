#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function
 * @array: array
 * @size: size of array
 * @action: a pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)

while (size > 0)
{
action(*array);
array++;
}
}
