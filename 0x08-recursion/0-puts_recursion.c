#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 *
 * @s: an argument of character value for strings
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	int a = 0;

	_putchar(*(s + 0));
	/* a++; */

	if (s[a] != '\0')
	{
		_puts_recursion(s + 1);
	}
}
