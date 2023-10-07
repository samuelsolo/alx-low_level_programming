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
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(tolower(letter));
		letter++;
	}
	
	letter = 'a';

	while (letter <= 'z')
	{
		putchar(toupper(letter));
		letter++;
	}
	putchar('\n');
	return (0);
}
