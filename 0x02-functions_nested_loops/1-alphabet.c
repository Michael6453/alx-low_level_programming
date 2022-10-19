#include "main.h"

/**
 * main - Prints reversed alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	print_alphabet();
	return (0);
}
