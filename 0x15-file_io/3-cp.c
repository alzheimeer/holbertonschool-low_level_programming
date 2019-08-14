#include "holberton.h"

/**
 * main - copy the content of a file to another file.
 * @argc: # of arguments.
 * @argv: arguments
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	char buf[1024];
	int fd, fd2, l1, c0, l2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	l1 = read(fd, buf, 1024);
	l2 = write(fd2, buf, l1);
	if (l2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	c0 = close(fd);
	if (c0 == -1)
		{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd);
		exit(100);
		}
	c0 = close(fd2);
	if (c0 == -1)
		{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd);
		exit(100);
		}
	return (0);
}
