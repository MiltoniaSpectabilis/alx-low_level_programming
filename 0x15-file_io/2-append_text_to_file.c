#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: the name of the file to append to
 * @text: the text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text)
{
	int fd;
	int len;
	int ret;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text)
	{
		for (len = 0; text[len]; len++)
			;

		ret = write(fd, text, len);

		if (ret == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
