#include "main.h"
/**
 * _strncpy - Function that copies a string, with number of bytes
 * @dest: This is the output dest
 * @src: This is the input source
 * @n: This is the number of bytes to copy
 *Return: return (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0' ; index++)
	{
		dest[index] = src[index];
	}
	for (; index  < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
