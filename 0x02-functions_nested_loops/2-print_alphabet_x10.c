#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *followed by a new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int alphaBet, number_of_times;

	for (number_of_times = 1; number_of_times <= 10; number_of_times++)
	{
		for (alphaBet = 97; alphaBet <= 122; alphaBet++)
		{
			_putchar(alphaBet);
		}
		_putchar('\n');
	}
}
