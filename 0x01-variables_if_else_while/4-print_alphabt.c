#include <stdio.h>
/**
 * main - Printing the alphabet without q and e
 *
 * Return: Always 0 if Successful
 */
int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i <= 25)
	{
		if (i != 16 && i != 4)
		{
			putchar(alphabets[i]);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
