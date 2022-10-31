#include "main.h"
/**
 *  read_textfile - reads text file
 *  @filename: name of file
 *  @letters: number of bytes
 *  Return: number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes, bytesRead;
	char *buffer;

	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		return (0);
	}
	bytesRead = read(fd, buffer, letters);
	close(fd);
	bytes = write(STDOUT_FILENO, buffer, bytesRead);
	free(buffer);
	return (bytes);
}
