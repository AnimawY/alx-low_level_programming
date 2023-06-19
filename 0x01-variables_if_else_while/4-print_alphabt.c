#include <stdio.h>
/*
 * Displaying small case characters xcept the letter q and e
 */

int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		putchar(ch);
	}
	printf("\n");
	return (0);
}
