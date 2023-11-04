#include "main.h"

/**
 * read_textfile - read and print test file to stdout
 * @filename: filr to be read
 * @letters: no of letters to read and print
 *
 * Return: Null if failed, No of letters that could be read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

if (filename == NULL)
return (0);

int fd;
ssize_t br, bw;
char *buff;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buff = malloc(letters);
if (buff == NULL)
{
close(fd);
return (0);
}

br = read(fd, buff, letters);
if (br == -1)
{
close(fd);
free(buff);
return (0);
}

bw =  write(STDOUT_FILENO, buff, br);

close(fd);
free(buff);

if (bw == -1 || bw != br)
return (0);

return (bw);
}
