#include "main.h"

/**
 * reset_to_98 - function that takes a pointer to an int as parameter
 *		and updates the value it points to to 98
 *@n: *n is a dereference value to a pointer
 *
 * Return: n
 */
void reset_to_98(int *n)
{
	int p;
	p = 98;
	*n = p;
	
}
