#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to be copied to memory
 *
 * Return: NULL if str is NULL. Pointer to new memory location
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *ptr;

	if (str == NULL)
		return (str);

	while (str[len] != '\0')
	{
		len++;
	}

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			ptr[i] = str[i];
		}
		ptr[i] = '\0';
	}

	return (ptr);
}
