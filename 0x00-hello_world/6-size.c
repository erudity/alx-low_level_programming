/*
 * A C project to print the size of various types on the
 * computer it is compiled and run on.
 *
 * Author: Azeez Lawal
 * Size is not a grandeur, and territory does not make a nation.
 *
 */

#include <stdio.h>

/**
 * main - Print out various size types.
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	char characterType;
	float floatType;
	double doubleType;
	int integerType;
	long int longIntegerType;
	long long int longLongIntegerType;

	/* Sizeof operator is used to evaluate the size of a variable*/
	printf("Size of a char: %ld byte(s)\n", sizeof(characterType));
	printf("Size of a int: %ld byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longIntegerType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongIntegerType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
	/*printf("Size of a double: %ld byte(s)\n", sizeof(doubleType));*/


	/*printf("Size of a char: %zu byte(s)\n", sizeof(char));*/
	/*printf("Size of an int: %zu byte(s)\n", sizeof(int));*/
	/*printf("Size of a long int: %zu byte(s)\n", sizeof(long int));*/
	/*printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));*/
	/*printf("Size of a float: %zu byte(s)\n", sizeof(float));*/

	return (0);
}
