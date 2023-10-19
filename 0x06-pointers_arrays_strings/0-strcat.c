#include "main.h"

/**
 *_strcat - concatenates  the string pointed to by @src to
 * end of the string pointed to by @dest
 *@dest: String to be appended
 *@src: String to be concatenated on
 *
 * Return: returns poiner to string @dest
 */

char *_strcat(char *dest, char *src)
{

	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
