#include "main.h"

/**
 * _helper - The helper of natural square root
 * @n: number
 * @s: character
 * Return: natural numbers
 */

int _helper(int n, int s)
{
	if (s * s > n)
	{
		return (-1);
	}
	if (s * s == n)
	{
		return (s);
	}
	else
		return (_helper(n, s + 1));
}

/**
 * _sqrt_recursion - function return natural square root
 * @n: number
 * Return: n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_helper(n, 0));
	}
}
