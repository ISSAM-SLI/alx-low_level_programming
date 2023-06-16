#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * This program prints the following message to the standard error:
 *              "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 *
 * Return: Always 1 (indicating failure)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
