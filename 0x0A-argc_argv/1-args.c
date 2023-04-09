#include "main.h"
#include <stdio.h>
/**
 * main - print the number of argument passed
 * @argc: argument count
 * @argv: argument vector
 * Return: number of argument
 */
int main(int argc, char *argv[])
{
printf("argc = %d\n", argc);

int i;

for (i = 0; i < argc; i++)
{
/* print the num of argument %d is for printing the index */
printf("argv[%d] = %s\n", i, argv[i]);
}
return (0);
}
