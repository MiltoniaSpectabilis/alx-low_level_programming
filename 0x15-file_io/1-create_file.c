#include "main.h"

/**
 * save_file - Save content to a file
 * @filename: The name of the file
 * @content: The content to be written into the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int num_letters;
	int ret_value;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	num_letters = 0;
	while (text_content[num_letters])
		num_letters++;

	ret_value = write(file_descriptor, text_content, num_letters);
	if (ret_value == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
