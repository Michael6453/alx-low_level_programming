#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed
 */

void _puts(char *str)
{
	if (*str != '\0')
	{
		 _putchar(*str++);
	}
	_putchar('\n');
}
