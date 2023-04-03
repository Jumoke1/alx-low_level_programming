#include "main.h"
/**
 * _strspn - get length of a string
 * @s: pointer
 * @accept: pointer
 * Return: i;
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
break;
}
}
if (!accept[j])
{
break;
}
}
return (i);
}
