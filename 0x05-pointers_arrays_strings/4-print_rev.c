#include "main.h"

/**
 * print_rev -This function Prints a reverse string
 *
 * @s: This is the input sting
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
