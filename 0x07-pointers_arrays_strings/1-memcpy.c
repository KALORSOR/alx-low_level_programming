#include "main.h"

/**
 * _memcpy - copies a memory buffer
 * @dest: memory area copying to
 * @src: memory area copying from
 * @n: number of bytes being copied
 *
 * Return: pointer to the copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
