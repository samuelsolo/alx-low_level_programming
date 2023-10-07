#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - does something
 * Description: prints alphabet
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(tolower(letter));
		letter--;
	}
	putchar('\n');
	return (0);
}
