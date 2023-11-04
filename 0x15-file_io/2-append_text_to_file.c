#include "main.h"

/**
 * append_text_to_file - add text to end file
 * @filename: file to be added to
 * @text_content: text to be added to file
 * Return: 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{

int fd;
ssize_t bw;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY| O_APPEND);
if (fd == -1)
return (-1);

if (text_content != NULL)
{

bw = write(fd, text_content, strlen(text_content));

if (bw == -1)
{
close(fd);
return (-1);
}
      
}

close(fd);

return (1);

}
