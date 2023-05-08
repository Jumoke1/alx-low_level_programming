#include "main.h"
#include <string.h>
/**
 * append_text_to_file - a function that append the text of a line
 * @text_content: terminated string
 * @filename: filename
 * Return:  1 if succefull or zero if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
int a;
ssize_t b;
if (filename == NULL)
{
return (-1);
}
a = open(filename, O_WRONLY | O_APPEND, text_content);

if (text_content != NULL)
{
b = write(a, text_content, strlen(text_content));
if (b == -1)
{
close(a);
return (-1);
}
}
close(a);
return (1);
}
