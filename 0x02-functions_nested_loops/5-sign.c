#include "main.h"
/**
 * print_sign - print sign
 * @n: n is a number
 * Return: 1 if n is greater 0, else return 1 else return -1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n = 0)
{
_putchar(0);
return (0);
}
else if (n < 0)
{
_putchar('-');
}
return (-1);
}
