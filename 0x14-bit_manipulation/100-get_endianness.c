#include "main.h"
/**
 * get_endianness - a function that checks endianness
 * Return: 0 otherwise return 1
 */
int get_endianness(void)
{
unsigned int a = 1;
char *n = (char *) &a;

if (*n == 1)

return (1);
return (0);
}
