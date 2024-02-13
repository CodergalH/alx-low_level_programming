#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of file to be created.
 * @text_content: Null terminated string to write to file.
 *
 * Return: Success 1. -1 failure.
 */

int create_file(const char *filename, char *text_content)
{
	int created_file, i, written_bytes;

	if (filename == NULL)
		return (-1);

	created_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR);
	if (created_file == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i] != '\0'; i++)
		;

	written_bytes = write(created_file, text_content, i);
	if (written_bytes == -1)
		return (-1);

	close(created_file);
	return (1);
}
