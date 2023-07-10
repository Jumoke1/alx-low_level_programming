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


/**
 * close_file - a dunction to close a file
 * @fdd: file to  closed.
 */
void close_file(int fdd)
{
int j;

j = close(fdd);

if (j == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdd);
exit(100);
}
}



/**
 * main - entry point for file content
 * @argc: no of argc
 * @argv: pointers to argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
int cp, cr, m_file, j_file;
char *buff;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buff = create_buffer(argv[2]);
cp = open(argv[1], O_RDONLY);
m_file = read(cp, buff, 1024);
cr  = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (cp  == -1 || m_file == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buff);
exit(98);
}
j_file = write(cr, buff, m_file);
if (cr == -1 || j_file == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buff);
exit(99);
}

m_file = read(cp, buff, 1024);
cr = open(argv[2], O_WRONLY | O_APPEND);

} while (m_file > 0);

free(buff);
close_file(cp);
close_file(cr);

return (0);
}

