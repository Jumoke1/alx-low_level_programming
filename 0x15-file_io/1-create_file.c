#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_file - Create a function that creates a file.
 * @text_content: terminated string
 * @filename: filename
 * Return: 1 or  -1
 */

int create_file(const char *filename, char *text_content)
{
int i;
ssize_t b;

if (filename == NULL)
return (-1);

i = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (i == -1)
return (-1);

if (text_content != NULL)
{
b  = write(i, text_content, strlen(text_context));

if (b == 1)
{
close(i);
return (-1);
}
}
close(i);
return (1);
}
