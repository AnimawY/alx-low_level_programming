#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, followed
 * by a new line.
 * @a: The array to be computed
 * @n: The size of the array
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == (n - 1))
			break;
		printf(", ");
	}
	printf("\n");


}
