#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to be located
 * Return: a pointer or a NULL
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = o; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
