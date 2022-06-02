#include "main.h"

/**
 * append_text_to_file - appends to a file
 * @filename: the file to read and write
 * @text_content:  a NULL terminated string to write to the file
 *
 * Return: 1 on succes or -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len = 0, wc;

if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_RDWR | O_APPEND);
if (text_content == NULL)
{
if (fd < 0)
{
return (-1);
}
return (1);
}
while (text_content[len] != '\0')
{
len++;
}
wc = write(fd, text_content, len);
if (wc < 0)
{
return (-1);
}
close(fd);
return (1);
}
