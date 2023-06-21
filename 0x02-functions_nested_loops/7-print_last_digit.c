#include "main.h"

/**
 * print_last_digit - prints the last digit of the number
 * @n: The number to be computed
 *
 * Return: Returns the last digit of the number
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit *= -1;

	_putchar(lastDigit + '0');

	return (lastDigit);
}
