#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of arguments.
 * @argv: arguments.
 * Return: 0 in success.
 */
int main(int argc, char **argv)
{
	int source, dest, s, d;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	if (source < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	dest = open(argv[2], (O_CREAT | O_TRUNC | O_WRONLY), 0664);
	while ((s = read(source, buff, 1024)) > 0)
	{
		d = write(dest, buff, s);
		if ((d != s) || (d < 0))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (s < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	}
	if (close(source))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source);
		exit(100);
	}
	if (close(dest))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}
	return (0);
}
