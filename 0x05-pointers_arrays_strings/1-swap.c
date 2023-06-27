#include "main.h"

/**
 * swap_int - swapes two integers
 * @a: the first number
 * @b: the second number
 *
 * Return: the swaped value of a and b
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
