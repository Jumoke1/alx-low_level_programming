#include "main.h"
#include <stdio.h>
/**
 * main - print the number of argument passed
 * @argc: argument count
 * @argv: argument vector
 * Return: (0);
 */
int main(int argc, char *argv[])
{
int i;

printf("argc = %d\n", argc);
for (i = 0; i < argc; i++)
{
/* print the num of argument %d is for printing the index */
printf("argv[%d] = %s\n", i, argv[i]);
}
return (0);
}
