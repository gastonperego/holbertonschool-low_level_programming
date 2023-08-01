#include "main.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
/**
 * append_text_to_file- creates a file
 *
 * @filename: filename
 * @text_content: content
 *
 * Return: 1 if succeed, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t wrote;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	len = strlen(text_content);

	fd = open(filename, O_RDWR | O_APENND);

	if (fd < 0)
		return (-1);

	wrote = write(fd, text_content, len);
	if (wrote == -1)
		return (-1);

	close(fd);

	return (1);
}
