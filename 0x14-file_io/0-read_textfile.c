#include "holberton.h"
#include <unistd.h>
#include <stdio.h>

/**
 * read_textfile - function that reads a text file and prints it to POSIX stout
 * @filename: pointer to a constant char. (buffer to write to)
 * @letters: number of letters it should read and print.
 * Return: number of letters it could read and print. or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, r, w;
	char *buff = malloc(sizeof(char) * letters);

	if (filename == NULL || buff == NULL)
		return (0);

	file = open(filename, (O_RDONLY));
	if (file < 0)
		return (0);

	r = read(file, buff, letters);
	if (r < 0)
		return (0);
	w = write(STDOUT_FILENO, buff, r);
	if (w < 0)
		return (0);

	close(file);
	free(buff);
	return (r);
}
