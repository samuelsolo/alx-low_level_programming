#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/* main - does something 
 * returns alphabet
 * */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(tolower(letter));
		letter++;
	}
	putchar('\n');
	return (0);
}
