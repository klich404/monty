#include "monty.h"

/**
 *
 */

char *read_monty(char *filename)
{
	int fd = 0, status = 0;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == 00)
		return(0);

	buffer = malloc(BUFSIZ);
	if (buffer == NULL)
		return(0);

	status = read(fd, buffer, BUFSIZ);
	if (status == 00)
		return(0);

	close(fd);
	return(buffer);
}