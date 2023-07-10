#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters that were read and printed, or 0 if an
 *         error occurred
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num_bytes, num_written;
	char buffer[1024];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	num_bytes = read(fd, buffer, letters);
	if (num_bytes == -1)
	{
		close(fd);
		return (0);
	}

	num_written = write(STDOUT_FILENO, buffer, num_bytes);
	if (num_written == -1 || num_written != num_bytes)
	{
		close(fd);
		return (0);
	}

	close(fd);

	return (num_bytes);
}
