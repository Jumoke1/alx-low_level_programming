#include "main.h"
/**
 * int _strspn - get length of a string
 * @s: pointer
 * @accept: pointer
 * Return: 0;
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
break;
}
if (!accept[j])
{
break;
}
}
return (i);
}
