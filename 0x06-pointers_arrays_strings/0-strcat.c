#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 *
 * @src: the appended string
 * @dest: the concatenated string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 10;

	while (src[i] != '\0'){
		i++;
		
		dest[i] = src[i];
		dest++;
		
	}

	return (dest);
}
