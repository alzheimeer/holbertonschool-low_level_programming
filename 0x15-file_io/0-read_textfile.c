#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include <string.h>
#include "holberton.h"

/**
 * read_textfile - read text file
 * @filename: name of file
 * @letters: number of letters
 * Return: length
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
