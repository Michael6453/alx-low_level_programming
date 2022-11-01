#include "main.h"
#include <string.h>

/**
 * _memset - this memory set function
 * @s: string
 * @b: a character
 * @n: an integer
 * Return: a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unasigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (memset(s,b,n));
}
