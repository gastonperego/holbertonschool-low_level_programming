#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * cp- copies the content of a file to another
 *
 * @argc: count of arguments
 * @argv: content of the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd, fd1;
	char buf[100000];
	ssize_t readed;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);

	if (fd < 0)
	{
		dprintf(2, "Error: Cant't read from file %s\n", argv[1]);
		exit(98);
	}

	readed = read(fd, buf, 1024);

	fd1 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);

	if (fd1 < 0)
	{
		dprintf(2, "Error: Cant't write to %s", argv[2]);
		exit(99);
	}

	write(fd1, buf, readed);

	close(fd);
	close(fd1);

	return (0);
}
