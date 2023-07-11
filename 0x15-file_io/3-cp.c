#include "main.h"
#include <errno.h>
#define BUFFER_SIZE 1024

void error_handling(int file_from, int file_to, char *argv[]);
void copy_file_contents(int file_from, int file_to, char *argv[]);

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_handling(file_from, file_to, argv);

	copy_file_contents(file_from, file_to, argv);

	close(file_from);
	close(file_to);

	return (0);
}

/**
 * error_handling - handles errors that may occur during file operations
 * @file_from: the file descriptor of the file being read from
 * @file_to: the file descriptor of the file being written to
 * @argv: an array of strings containing the arguments passed to the program
 */
void error_handling(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * copy_file_contents - copies the contents of one file to another
 * @file_from: the file descriptor of the file to read from
 * @file_to: the file descriptor of the file to write to
 * @argv: an array of strings containing the arguments passed to the program
 */
void copy_file_contents(int file_from, int file_to, char *argv[])
{
	ssize_t nchars, nwr;
	char buf[BUFFER_SIZE];

	do {
		nchars = read(file_from, buf, BUFFER_SIZE);
		if (nchars == -1)
			error_handling(-1, 0, argv);
		nwr = write(file_to, buf, nchars);
		if (nwr == -1)
			error_handling(0, -1, argv);
	} while (nchars > 0);
}
