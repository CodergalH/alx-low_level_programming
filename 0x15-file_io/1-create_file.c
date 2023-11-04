#include "main.h"

/**
 * create_file - creates an empty file
 * @filename: file to be created
 * @text_content: null string to be added to file
 * Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{

int fd;
ssize_t bw;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY, 0600);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
bw = write(fd, text_content, strlen(text_content));
if (bw == -1)
return (-1);

if (ftruncate(fd, bw) == -1)
{
close(fd);
return (-1);
}

}

close(fd);

return (1);

}
