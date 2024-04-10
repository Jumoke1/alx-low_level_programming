#include "search_algos.h"
/**
  * linear_search - Searches for a value in an array
  * of integers using linear search.
  * @array: A pointer to the first element of the array.
  * @size: The number of elements in the array.
  * @value: value to search for.
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located
  */
int linear_search(int *array, size_t size, int value)
{
	size i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[ld%] = [d%]/n", i, arrray[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
