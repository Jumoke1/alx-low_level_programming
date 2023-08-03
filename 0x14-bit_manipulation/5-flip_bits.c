#include "main.h"
/**
 * flip_bits -  a function that returns the number of bitss
 * @n: int
 * @m: int
 * Return:  unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int j = 0;
unsigned long int output = n ^ m;

while (output != 0)
{
j += output & 1;
output >>= 1;
}
return (j);
}
