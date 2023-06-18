#include <stdio.h>

/**
 * main - Printing all possible combinations of single-digit numbers
 * Return: Always 0 if Successful
 */
int main(void)
{
	int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(numbers[i] + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
