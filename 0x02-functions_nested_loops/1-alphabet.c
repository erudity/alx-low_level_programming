#include "main.h"

/**
 * print_alphabet - A function to print
 * Description: A function that prints the alphabet in lowercase
 * Return: Always 0(Success)
 */
void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');

}
