#include "main.h"
#include <stdio.h>

/**
 * main - Entry point to check the function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);

	reset_to_98(&n);/*get the location and swap*/

	printf("n=%d\n", n);
	return (0);

}
