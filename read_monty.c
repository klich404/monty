#include "monty.h"

/**
 *
 */

char *read_monty(char *filename)
{
	int fd, status;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == 00)
		return(0);

	buffer = malloc(sizeof(char) * fd);
	if (buffer == NULL)
		return(0);

	status = read(fd, buffer, BUFSIZ);
	if (status == 00)
		return(0);

	return(buffer);
}