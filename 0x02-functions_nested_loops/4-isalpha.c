#include "main.h"

/**
 * _isalpha -> checks for uppercase alphabets
 * @c: the alphabet to be checked on
 * Return: Returns 0 and 1 depending on some
 * given conditions
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
