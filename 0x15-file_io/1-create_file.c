#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the filename
 * @text_content: content in the file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd < 0)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		ssize_t bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written < 0 || (size_t)bytes_written != strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);

}
