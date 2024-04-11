#include"search_algos.h"
/**
  * binary_search - Searches for a value in a sorted  array
  * of integers using binary search.
  * @array: A pointer to the first element of the array.
  * @size: The number of elements in the array.
  * @value: value to search for.
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located
  */
int binary_search(int *array, size_t size, int value)
{
    size_t l = 0, r = size - 1, mid;

    if (array == NULL)
        return (-1);

    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (value == array[mid])
            return (mid);

        printf("Searching in array[%ld] = [%d]\n", mid, array[mid]);

        if (value < array[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }

    return (-1);
}
