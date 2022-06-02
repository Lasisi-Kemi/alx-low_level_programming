#include "main.h"

/**
 * read_textfile - read and write a file to POSIX std out
 * @filename: the file to read and write
 * @letters: the size of byte to read and write
 *
 * Return: the num of byte written or 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t counter = 0;
int fd, rc;
char *buff;

if (filename == NULL)
{
return (0);
}

buff = malloc(letters * sizeof(char));
if (buff == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd < 0)
{
return (0);
}
rc = read(fd, buff, letters);
if (rc < 0)
{
return (0);
}
buff[rc] = '\0';
counter += write(STDOUT_FILENO, buff, rc);
close(fd);
return (counter);
}
