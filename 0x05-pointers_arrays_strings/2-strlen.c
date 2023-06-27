#include "main.h"

/**
 * _strlen - returns the string length
 * @s: the string its length to be computed
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);

}
