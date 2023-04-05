#include "main.h"

/**
 * _helper - The helper that print prime number
 * @n: character
 * @s: character
 * Return: n
 */

int _helper(int n, int s)
{
if (s == 1)
{
return (1);
}
if (n % s == 0 && s > 0)
{
return (0);
}
return (_helper(n, s - 1));
}
/**
 * is_prime_number - integer that print prime number
 * @n: character
 * Return: n
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (_helper(n, n - 1));
}
