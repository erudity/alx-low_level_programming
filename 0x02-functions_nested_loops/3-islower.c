#include "main.h"

/**
 * _islower - a function to check whether alphabet is lowercase
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character, 0 for the rest
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

	_putchar('\n');
}
