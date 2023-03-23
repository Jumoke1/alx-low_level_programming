#include "main.h"
/**
 * _abs - abs
 * @:a parameter to be checked
 * Return: a if it is an absolute value
 */
int _abs(int a)
{
if (a < 0)
{
a = -(a);
}
else
{
a = a;
}
return (a);
}
