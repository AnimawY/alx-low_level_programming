#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: The starting natural numbers
 *
 * Return: returns all natural numbers to n
 */
void print_to_98(int n)
{
	int n1;

	if (n > 98)
	{
		for (n1 = n; n1 >= 98; n1--)
		{
			printf("%d", n1);
			if (n1 == 98)
				break;
			printf(",");
			printf(" ");

		}
		printf("\n");
	}
	else
	{
		for (n1 = n; n1 < 99; n1++)
		{
			printf("%d", n1);
			if (n1 == 98)
				break;
			printf(",");
			printf(" ");
		}
		printf("\n");
	}
}
