#include <stdio.h>
#include <stdlib.h>
/* #include "main.h" */ 

int main(int argc, char *argv[]);

/**
 *Comments goes here
 */
 int main(int argc, char *argv[])
 {
	int i;
	int sum = 0;
	
		for(i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
			printf("total = %d\n", sum);
		
	
	return (0);
 }


