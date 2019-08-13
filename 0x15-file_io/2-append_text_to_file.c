#include "holberton.h"
#include <unistd.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to create
 * @text_content: string to appends in the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename,  O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}
