#include "main.h"

/**
 * append_text_to_file - appends text to end of file
 * @filename: name of file
 * @text_content: Null terminated string to be added to end of file.
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bw, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i] != '\0'; i++)
		;

	bw = write(fd, text_content, i);
	if (bw == -1)
		return (-1);

	close(fd);
	return (1);
}
