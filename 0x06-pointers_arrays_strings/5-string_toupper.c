#include "main.h"
/**
 * *string_ - convert string to upper case
 * @a: string
 * Return: uppercase
 */
char *string_toupper(char *a)
{
int i;

for (i = a; i != '\0'; i++)
{
if (a[i] >= 'a' && a[i] <= 'z')
{
a[i] = a[i] - 32
}
i++;
}
return (0);
}
