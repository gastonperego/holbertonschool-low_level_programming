#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * read_textfile- reads a file and prints it to the std output
 *
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: the number of letters it read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[10000];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	read(fd, buf, letters);
	write(1, buf, letters);

	return (letters);
}
