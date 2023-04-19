#include "function_pointers.h"
/**
 * int_index - a function that search
 * @size: size of array
 * @cmp:  a pointer to a function
 * @array: array
 *
 * Return: index of the first int element OR -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
