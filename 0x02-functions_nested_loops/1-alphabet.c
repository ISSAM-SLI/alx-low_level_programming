#include "main.h"

/**
* print_alphabet - Prints the alphabet, in lowercase
*/

void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= 25; i++)
	{
		_putchar(alphabet[i]);
	}

	_putchar('\n');
}
