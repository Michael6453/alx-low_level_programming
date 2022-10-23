#include "main.h"

/**
 * _isdigit - checks if a char is a digit
 * @c: the given char
 * Return: returns 1 if c is a digit,
 * otherwise returns 0
 */

int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;
	return (y);
}
