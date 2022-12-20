#include "main.h"

/**
 * _strcpy - copy strings pointed to a variable
 * @dest: This is destiny
 * @src: this is the copier
 *
 * Return: this returns copy
 */char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
