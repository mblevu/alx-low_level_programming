#include "main.h"

/**
 * read_textfile - reads .txt and prints to stdout
 * @filename: pointer to the filename
 * @letters: maximum number of letters to read and print
 * Return: actual number of letters it could print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
	{
		return (0);
	}
	bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
	{
		free(buffer);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (bytes_written);

}
