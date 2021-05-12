#include "holberton.h"

/**
* read_textfile - function that reads a text file and
* prints it to the POSIX standard output.
* @filename: file to read and print.
* @letters: number of letters it should read and print.
* Return: number of letters printed.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_file, write_file;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	read_file = read(fd, buf, letters);
	if (read_file == -1)
		return (0);

	write_file = write(STDOUT_FILENO, buf, read_file);
	if (write_file == -1)
		return (0);

	close(fd);
	free(buf);
	return (read_file);
}
