#include "main.h"

/**
 * _puts - a function that puts
 * @str: a parameter to _puts function
 * Return: the length of the string
 */

void _puts(char *str)
{
	for (; *str != '\0' ; str++)
	{
		 _putchar(*str);
	}
	_putchar('\n');
}
