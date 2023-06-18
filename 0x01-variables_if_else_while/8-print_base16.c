#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp_num[] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(alp_num[i]);
	}
	putchar('\n');
	return (0);
}
