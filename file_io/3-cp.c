#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main- copies the content of a file to another
 *
 * @argc: count of arguments
 * @argv: content of the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd, fd1, close1, close2;
	char buf[100000];
	ssize_t readed, wrote;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	readed = read(fd, buf, 100000);

	if (fd < 0 || readed == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	wrote = write(fd1, buf, readed);
	if (fd1 < 0 || wrote < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	close1 = close(fd);
	close2 = close(fd1);
	if (close1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
	if (close2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1);
		exit(100);
	}

	return (0);
}
