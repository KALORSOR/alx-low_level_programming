#include "main.h"

/**
*create_array - creates an array of chars, and
*initializes it with a specific char.
*@size: size of the array
*@c: character to insert
*Return: NULL if size is zero or if it fails,
*pointer to array if okay.
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
