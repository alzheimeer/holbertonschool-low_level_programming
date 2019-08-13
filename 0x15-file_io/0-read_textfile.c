#include "holberton.h"

/**
 * read_textfile - returns the actual number of letters
 * @filename: file to read and print
 * @letters: number of letters to print
 * Return: the number or letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, l1, l2;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(letters * sizeof(char));

	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	l1 = read(fd, buf, letters);
	l2 = write(STDOUT_FILENO, buf, l1);

	if (l2 == -1)
		return (0);
	close(fd);
	free(buf);
	return (l2);
}
