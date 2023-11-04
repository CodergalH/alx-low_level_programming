#include "main.h"

/**
 * main - copies the content of one file to another file,
 * handling various error cases
 * @argc: first arg
 * @argv: second arg
 * Return: 1 on success
 */

int main(int argc, char *argv[])
{
const char *file_from = argv[1];
const char *file_to = argv[2];
int fd_from = -1, fd_to = -1;
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
exit_error(98, "Error: Can't read from file", fd_from, fd_to);

fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
exit_error(99, "Error: Can't write to file", fd_from, fd_to);

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
exit_error(99, "Error: Can't write to file", fd_from, fd_to);
}

if (bytes_read == -1)
exit_error(98, "Error: Can't read from file", fd_from, fd_to);

close(fd_from);
close(fd_to);

return (0);
}
