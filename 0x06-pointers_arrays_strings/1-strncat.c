#include "main.h"
/**
 *_strncat - concatenate two strings adding number of bytes
 *@dest: string to be appended on
 *@src: string to be completed at end of dest
 *@n:integer parameter to compare i to
 *Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);

}
