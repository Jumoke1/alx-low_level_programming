#include "main.h"
/**
 * binary_to_uint - a function that converts binary
 * @b: binary num
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
int z;

unsigned int k = 0;

if (b == NULL)
return (0);

for (z = 0; b[z]; z++)
{
if (b[z] < '0' || b[z] > '1')
return (0);
k = 2 * k + (b[z] - '0');
}
return (k);
}
