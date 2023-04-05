#include "main.h"

/**
 * _helper - the helper that print the prime number
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
 * is_prime_number - return input integer
 * @n: string
 * Return: return 1 otherwise return 0
 */

int is_prime_number(int n)
{
if (n <= 0)
{
return (-helper(n, n - 1));
}
}
