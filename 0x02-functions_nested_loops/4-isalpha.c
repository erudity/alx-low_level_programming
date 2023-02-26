#include "main.h"

/**
 * _isalpha - a function to check alphabetic character
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase or uppercase letter, 0 for the rest
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

	_putchar('\n');
}
