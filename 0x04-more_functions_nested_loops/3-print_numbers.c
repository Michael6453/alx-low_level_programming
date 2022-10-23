#include "main.h"

/**
 * print_numbers - prints from 0 to 9
 * Return: returns 0
 */

void print_numbers(void)
{
	int n = 0;

	while (n < 10)
		_putchar(n++ + '0');

	_putchar('\n');
}
