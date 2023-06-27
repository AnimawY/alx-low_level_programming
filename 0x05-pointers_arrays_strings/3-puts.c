#include "main.h"
/**
 * _puts - prints a string followed by new line
 * @str: a string to be printed
 *
 * Return: the string
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
