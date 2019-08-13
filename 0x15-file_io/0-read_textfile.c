#include "holberton.h"

/**
 * read_textfile - returns the actual number of letters
 * @filename: file to read and print
 * @letters: number of letters to print
 * Return: the number or letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, length;
	char buf[letters];

	if (filename == NULL)
		return (0);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	length = write(STDOUT_FILENO, buf, read(fd, buf, letters));
	if (length == -1)
		return (0);
	close(fd);
	return (length);


}
