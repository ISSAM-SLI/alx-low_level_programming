#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse.
 *
 * Return: Always 0 if succesful.
 */
int main(void)
{
	char rev_alpha[] = "zyxwvutsrqponmlkjihgfedcba";
	int i = 0;

	while (i <= 25)
	{
		putchar(rev_alpha[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
