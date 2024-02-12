#include "main.h"

/**
 * read_textfile - reads and prints provided textfile to stdout.
 * @filename: provided textfile.
 * @letters: no of bytes to be read and printed.
 *
 * Return: no of letters read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, bytes_written;
	char *c = (char *) malloc(letters * sizeof(char));

	if (filename == NULL)
	{
		free(c);
		return (0);
		exit(1);
	}

	fd = open(filename, O_RDWR);
	if (fd < 0)
	{
		free(c);
		return (0);
		exit(1);
	}

	bytes_read = read(fd, c, letters);
	if (bytes_read < 0)
	{
		free(c);
		return (0);
		exit(1);
	}

	bytes_written = write(1, c, bytes_read);
	if (bytes_written < 0)
	{
		free(c);
		return (0);
		exit(1);
	}

	free(c);
	return (bytes_written);
}

