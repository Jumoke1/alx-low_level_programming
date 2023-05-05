#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1
 * @n: int
 * @index: the index
 * Return: 1 if worked or 0 when ther is error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (1UL << index) | *n);

return (1);
}
