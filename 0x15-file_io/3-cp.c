#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - a function that allocate 1024 bytes for a buffer.
 * @file: file buffer is storing
 * Return: a pointer
 */
char *create_buffer(char *file)
{
char *ten;

ten = malloc(sizeof(char) * 1024);

if (ten == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}

return (ten);
}
