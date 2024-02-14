#include "main.h"

/**
 * main - check the code
 * @argc: argument counter
 * @argv: array of arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int ret;

	if (argc != 3)
	{
		dprintf(2, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	ret = copy(argv[1], argv[2]);

	return (ret);
}

/**
 * copy - copy content fron file to another
 * @filename1: first file
 * @filename2: pointer to file
 *
 * Return: 0 success.
 */

int copy(char *filename1, char *filename2);
int copy(char *filename1, char *filename2)
{
	int file_from, file_to, close_err;
	ssize_t chars, bw;
	char buf[1024];

	file_from = open(filename1, O_RDONLY);
	file_to = open(filename2, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename1);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2);
		exit(98);
	}

	chars = 1024;
	while (chars == 1024)
	{
		chars = read(file_from, buf, 1024);
		if (chars == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename1);
			exit(98);
		}
		bw = write(file_to, buf, chars);
		if (bw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2);
			exit(99);
		}
	}

	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	close_err = close(file_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);

}
