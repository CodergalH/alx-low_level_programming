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

	if (filename == NULL || letters <= 0)
	{
		free(c);
		return (0);
		exit(1);
	}

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(c);
		return (0);
		exit(1);
	}

	bytes_read = read(fd, c, letters);
	if (bytes_read == -1)
	{
		free(c);
		return (0);
		exit(1);
	}

	bytes_written = write(STDOUT_FILENO, c, bytes_read);
	if (bytes_written == -1 || bytes_written < bytes_read)
	{
		free(c);
		return (0);
		exit(1);
	}

	close(fd);
	free(c);
	return (bytes_written);
}

