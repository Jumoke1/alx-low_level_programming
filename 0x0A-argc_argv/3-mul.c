#include "main.h"
#include <stdio.h>
/**
 * main - program that mutiplies two num
 * @argc: argument count
 * @argv: argument vector
 * Return: (1);
 */
int main(int argc, char *argv)

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
