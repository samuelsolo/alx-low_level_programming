#include "main.h"

/**
* _strncat - Concatenates two strings up to a maximum of n bytes
* @dest: Pointer to the destination string
* @src: Pointer to the source string
* @n: Maximum number of bytes to concatenate from src
*
* Return: Pointer to the resulting string (i.e. dest)
*/
char *_strncat(char *dest, char *src, int n)

{
	int dest_len = _strlen(dest);
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
	dest[dest_len + b] = src[b];

	dest[dest_len + b] = '\0';

	return (dest);
}
