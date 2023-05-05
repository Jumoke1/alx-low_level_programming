#include "main.h"
/**
 * clear_bit - a function that set the value of a bit
 * @n: int
 * @index: index
 * Return: 1 or zero
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~1UL << index) & *n);

return (1);
}
