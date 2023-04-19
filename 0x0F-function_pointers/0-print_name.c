#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - a function that print
 * @name: argument
 * @f: a pointer to a function
 */
void print_name(char *name, void (*f)(char *))

{

if (name != NULL || *f != NULL)
	return;
f(name);
}
