#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: pointer to the filename
 * @text_content: text content string
 * Return: 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;


	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		size_t len = strlen(text_content);
		size_t bytes_written = write(fd, text_content, len);

		if (bytes_written == 0)
		{
			return (-1);
		}
		if (bytes_written != (size_t)len)
		{
			return (-1);
		}
	}

	close(fd);
	return (1);

}
