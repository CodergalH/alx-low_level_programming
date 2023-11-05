#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <elf.h>

#define BUFFER_SIZE 1024

int _putchar(char *c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_exit(int code, const char *format, ...);

/**
 * exit_error - dprintf to STDERR and exit with specified code
 * @code: parameter
 * @message: member
 * @fd_from: int
 * @fd_to: int
 */
void exit_error(int code, const char *message, int fd_from, int fd_to)
{
dprintf(STDERR_FILENO, "%s\n", message);

if (fd_from != -1)
close(fd_from);

if (fd_to != -1)
close(fd_to);

exit(code);
}

#endif /* MAIN_H */
