#include "main.h"
/**
 *  read_textfile - reads text file
 *  @filename: name of file
 *  @letters: number of bytes
 *  Return: number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i;
	ssize_t bytes = 0;
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
	read(fd, buffer, letters);
	buffer[letters] = '\0';
	close(fd);
	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(buffer[i]);
		bytes++;
	}
	free(buffer);
	return (bytes);
}
