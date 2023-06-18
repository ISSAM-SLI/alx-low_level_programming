#include <stdio.h>

/**
 * main - printing the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 if succesful.
 */
int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i <= 25)
	{
		putchar(alphabets[i]);
		i++
	}
	putchar('\n');
	return (0);
}
