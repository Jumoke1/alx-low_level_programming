#include  "main_h"
/**
 * swap_int - swaping the value of two integer
 * @a: - values to be swaped
 * @b: - values to be swaped
 */
void swap_int(int *a, int *b)
{
int h;
h = *a;
*a = *b;
*b = h;
}
