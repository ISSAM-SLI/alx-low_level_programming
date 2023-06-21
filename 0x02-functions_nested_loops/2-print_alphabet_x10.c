#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 *
 */

void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 25; j++)
		{
			_putchar(alphabet[j]);
		}

		_putchar('\n');
	}
}
