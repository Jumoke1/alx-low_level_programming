#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that mutiplies two num
 * @argc: argument count
 * @argv: argument vector
 * Return: (1);
 */


int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	printf("%s\n", "Error");
	return (1);
	}
	printf("%i\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
