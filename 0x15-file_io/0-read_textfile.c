#include "holberton.h"

/**
 * read_textfile - returns the actual number of letters
 * @filename: file to read and print
 * @letters: number of letters to print
 * Return: the number or letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, length2, lenght1;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(letters * sizeof(char));

	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	lenght1 = read(fd, buf, letters);
	length2 = write(STDOUT_FILENO, buf, length1);

	if (length2 == -1)
		return (0);
	close(fd);
	free(buf);
	return (length2);
}
