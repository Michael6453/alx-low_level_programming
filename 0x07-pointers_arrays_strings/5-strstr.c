#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to be located
 * Return: a pointer or a NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystick);
	while (*haystick)
	{
		index = 0;
		if (haystick[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystick);
				index++;
			} while (haystick[index] == needle[index])
		}
				haystick++;
		}
	return ('\0');
}
