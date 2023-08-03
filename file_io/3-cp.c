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
 * @av: content of the arguments
 *
 * Return: 0
 */
int main(int argc, char *av[])
{
	int f, fd1, close1, close2;
	char buf[1024];
	ssize_t readed, wrote;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	fd1 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (fd1 < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while (read(f, buf, 1024) > 0)
	{
		readed = read(fd, buf, 1024);
		if (readed < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		wrote = write(fd1, buf, 1024);
		if (wrote < 0)
		{
			dprintf(STDERR_FILENO, "Error: Cant't write to %s\n", av[2]);
			exit(99);
		}
	}
	close1 = close(fd);
	close2 = close(fd1);
	if (close1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100); }
	if (close2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1);
		exit(100);
	}
	return (0); }
