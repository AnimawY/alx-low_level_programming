#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: string to be printed
 */
void print_rev(char *s)
{

	int len = 0, index = 0;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
