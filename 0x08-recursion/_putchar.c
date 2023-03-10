#include <unistd.h>

/**
 * _putchar - print to stdout ASCII values
 *
 * @c: character argument or input
 *
 * Return: Always 0.
 */
void _putchar(char c)
{
	/* return (write(1, &c, 1)); */
	write(1, &c, 1);
}
