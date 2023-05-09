#include "main.h"
#include <stdlib.h>
/**
 * read_textfile -  a function that reads a text file
 * @filename: the filename
 * @letters: number of letters itr should read and print
 * Return: the actual number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t a, read_b, write_c;

char *buff_temp;
if (filename == NULL)
return (0);

a = open(filename, O_RDONLY);

if (a == 1)
return (0);

buff_temp = malloc(sizeof(char) * letters);
read_b = read(a, buff_temp, letters);

write_c = write(STDOUT_FILENO, buff_temp, read_b);

close(a);

free(buff_temp);
return (write_c);
}
