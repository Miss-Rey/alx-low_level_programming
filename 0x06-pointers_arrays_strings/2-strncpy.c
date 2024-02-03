#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: buffer to be copied into
 * @src: string to be copied
 * @n: number of bytes to be copied
 *
 * Return: copied string buffer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
