#include <stdio.h>

/**
 * main - printing the alphabet in lowercase, and then in uppercase .
 *
 * Return: Always 0 if succesful.
 */
int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (i <= 51)
	{
		putchar(alphabets[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
