#include "holberton.h"

/**
 * read_textfile - function that reads a text file and prints it standard output
 * @filename: name of file
 * @letters: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedescripter;
	int length = 0;
	char buffer[letters];

	if (!filename)
		return (0);

	filedescripter = open(filename, O_RDONLY);

	if (filedescripter == -1)
		return (0);

	length = read(filedescripter, buffer, letters);


	length = (write(STDOUT_FILENO, buffer, length));

	close(filedescripter);
	return (length);
}
