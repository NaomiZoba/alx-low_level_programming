#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Text file that prints char to STDOUT.
 * @filename: name of the file to STDOUT
 * @letters: letters allowed to be read out in their number
 * Return: n- practical number of bytes to be read after printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t n;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	n = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (n);
}

