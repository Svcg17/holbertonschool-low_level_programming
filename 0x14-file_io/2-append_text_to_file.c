#include "holberton.h"
#include <unistd.h>
#include <sys/stat.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: is the NULL terminanted string to add at the end of the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, w, len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, (O_RDWR | O_APPEND));

	if (file < 0)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;

		w = write(file, text_content, len);

		if (w < 0)
			return (-1);
	}
	close(file);
	return (1);
}
