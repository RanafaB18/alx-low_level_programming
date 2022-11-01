#include "main.h"
/**
  * append_text_to_file- appends text at the end of a file
  * @filename: name of file
  * @text_content: text
  * Return: 1 on success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	if (access(filename, F_OK) == 0)
	{
		return (1);
	}
	if (filename == NULL)
	{
		return (-1);
	}
	if ((access(filename, F_OK) != 0) | (access(filename, W_OK) != 0))
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fd = open(filename, O_APPEND);
	for (i = 0; text_content[i] != '\0'; i++)
	{
		;
	}
	write(fd, text_content, i);
	close(fd);
	return (1);
}