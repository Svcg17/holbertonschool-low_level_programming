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
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}
	source = open(argv[1], O_RDONLY);
	if (source < 0)
	{
		dprintf(2, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	dest = open(argv[2], (O_CREAT | O_TRUNC | O_WRONLY), 0664);
	if (dest < 0)
	{
		dprintf(2, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	while ((s = read(source, buff, 1024)) > 0)
	{
		d = write(dest, buff, s);
		if ((d != s) || (d < 0))
		{
			dprintf(2, "Error: Can't read from file %s", argv[1]);
			exit(98);
		}
	}
	if (close(source))
	{
		dprintf(2, "Error: Can't close fd %d", source);
		exit(100);
	}
	if (close(dest))
	{
		dprintf(2, "Error: Can't close fd %d", dest);
		exit(100);
	}
	return (0);
}
