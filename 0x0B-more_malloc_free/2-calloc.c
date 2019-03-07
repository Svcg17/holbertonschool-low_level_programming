#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array using malloc
 *
 * Return: pointer to the allocated memory, if nmemb or size = 0 return null
 * if malloc fails return null.
 * @nmemb: number of elements in the array
 * @size: size of each element of the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array, *temp;
	unsigned int len, i;

	len = size * nmemb;
	if (nmemb == 0 || size == 0)
		return ('\0');
	array = malloc(sizeof(char) * len);
	if (array == '\0')
		return ('\0');

	temp = array;
	for (i = 0; i < size * nmemb; i++)
	{
		temp[i] = 0;
	}
	return (temp);
}
