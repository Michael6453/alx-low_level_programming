#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to be located
 * Return: a pointer to the char or a NULL
 */

char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
