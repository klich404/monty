#include "monty.h"

/**
 * read_monty - read a file
 * @filename: the name of the file to read
 * Return: buffer
 */

char *read_monty(char *filename)
{
	int fd = 0, status = 0;
	char *buffer = NULL;

	if (filename == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	fd = open(filename, O_RDONLY);
	if (fd == 00)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	buffer = malloc(BUFSIZ);
	if (buffer == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(buffer);
		exit(EXIT_FAILURE);
	}

	status = read(fd, buffer, BUFSIZ);
	if (status == 00)
		return (0);

	close(fd);
	return (buffer);
}
