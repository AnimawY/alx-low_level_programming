#include <stdio.h>

/**
 * printing characters from z -a
 *
 * The expected out put be zyxw....a
 */

int main (void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	printf("\n");

	return (0);
}
