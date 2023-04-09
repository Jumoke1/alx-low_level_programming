#include "main.h"
#include <stdio.h>
/**
 * main - print a name
 * @argc: argument count
 * @argv: argument vector
 * Return: (0);
 */
int main(int argc, char *argv[])
{
/* suppress any warning agint the variable argc isnot used */
(void)argc;
/*%s is a format specifier for strings */
/*print the first value in argv array*/
printf("%s\n", argv[0]);

return (0);
}
