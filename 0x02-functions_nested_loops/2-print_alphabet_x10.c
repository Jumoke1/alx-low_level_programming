#include "main.h"
/**
 *print_alphabet_x10 - print alphabetx10
 */
void print_alphabet_x10(void)
{
char p;
int i;
for (i = 0; i <= 10; i++)
{
for (p = 'a'; p <= 'z'; p++)
{
_putchar(p);
}
_putchar('\n');
}
}
