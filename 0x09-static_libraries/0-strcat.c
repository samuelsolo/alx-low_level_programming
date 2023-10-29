#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: the destination string
* @src: the source string
*
* Return: a pointer to the resulting string
*/

char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
