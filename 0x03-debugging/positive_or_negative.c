#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * positive_or_negative - entry point
 * @i: variable or number provided for testing
 * Description: prints  if a number is positive or negative.
 * Return: 0
 */
void positive_or_negative(int i)
{
	/* int n;*/

	/* srand(time(0)); */
	/* n = rand() - RAND_MAX / 2; */
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
