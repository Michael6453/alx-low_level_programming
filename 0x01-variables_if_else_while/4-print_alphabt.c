#include <stdio.h>
/**
 * main - Starts the program
 * Return: returns zero
 */
int main(void)
{
int ch;
while (ch != 'q' && ch != 'e')
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
