#include "main.h"

/**
 * main - Entry Point
 * Description: a program that prints _putchar, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
