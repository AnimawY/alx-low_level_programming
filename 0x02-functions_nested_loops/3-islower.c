#include "main.h"

/**
 * _islower - function is here
 *
 * Return - always 0 or 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
