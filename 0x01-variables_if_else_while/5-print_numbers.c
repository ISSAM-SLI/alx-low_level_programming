#include <stdio.h>
/**
 * main - Printing the alphabet without q and e
 *
 * Return: Always 0 if Successful
 */
int main(void)
{
	char numbers[] = "0123456789";
	int i = 0;

	while (i <= 9)
	{
		putchar(numbers[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
