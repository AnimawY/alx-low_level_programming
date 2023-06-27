#include "main.h"

/**
 * _strcpy - copy sub-string
 * @dest: destination string.
 * @src: source string.
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
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
