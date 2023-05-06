#include "main.h"
#include <stddef.h>
/**
 * print_binary - a function that prints the binary representation of a number
 * @n: number of bit to be counted
 */
void print_binary(unsigned long int n)
{
int a;
addup = 0;
unsigned long int j;

for (a = 63; a >= 0; a--)
{
j = n >> a;

if (j & 1)
{
_putchar('1');
addup++;
}
else if (addup)
_putchar('0');
}
if (!addup)
_putchar('0');
}
