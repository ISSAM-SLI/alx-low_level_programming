#include <stdio.h>
/**
 * main - Printing all single digit numbers of base 10 starting from 0
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
