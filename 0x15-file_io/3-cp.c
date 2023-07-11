#include "main.h"

/**
 * check_file_access - checks if files can be opened.
 * @source_file: the source file.
 * @destination_file: the destination file.
 * @argv: arguments vector.
 * Return: no return.
 */
void check_file_access(int source_file, int destination_file, char *argv[])
{
	if (source_file == -1)
	{
		dprintf(STDERR_FILENO, "Unable to access source file %s\n", argv[1]);
		exit(98);
	}
	if (destination_file == -1)
	{
		dprintf(STDERR_FILENO, "Unable to access destination file %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - program to copy a file.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int source_file, destination_file, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp source_file destination_file");
		exit(97);
	}
	source_file = open(argv[1], O_RDONLY);
	destination_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC |
			O_APPEND, 0664);
	check_file_access(source_file, destination_file, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(source_file, buf, 1024);
		if (nchars == -1)
			check_file_access(-1, 0, argv);
		nwr = write(destination_file, buf, nchars);
		if (nwr == -1)
			check_file_access(0, -1, argv);
	}

	err_close = close(source_file);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Unable to close source file %d\n", source_file);
		exit(100);
	}
	err_close = close(destination_file);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Unable to close destination file %d\n",
				destination_file);
		exit(100);
	}
	return (0);
}
