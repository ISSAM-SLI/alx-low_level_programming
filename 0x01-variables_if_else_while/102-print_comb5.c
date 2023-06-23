#include <stdio.h>

/**
 * main - printing all possible combinations
 *	of two two-digit numbers
 *
 * Return: Always 0 if Successful
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i != 98 || j != 99)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}