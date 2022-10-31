#include "main.h"
/**
  * create_file - creates a file
  * @filename: name of file
  * @text_content: content of file
  * Return: 1 on success -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t bytes;

	if (!filename)
	{
		return (-1);
	}
	if (access(filename, F_OK) == 0)
	{
		truncate(filename, 0);
		fd = open(filename, O_WRONLY);
	}
	else
	{
		fd = open(filename, O_CREAT | O_WRONLY, 0600);
	}
	if (fd == -1)
	{
		return (fd);
	}
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{
		;
	}
	bytes = write(fd, text_content, i);
	close(fd);
	if (bytes == -1)
	{
		return (bytes);
	}
	return (1);
}

