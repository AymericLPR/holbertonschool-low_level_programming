#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the stdout
 * @filename: filename
 * @letters: letters
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, red;
char *buff;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buff = malloc(sizeof(char) * letters);
red = read(fd, buff, letters);
close(fd);
return (write(STDOUT_FILENO, buff, red));
}
