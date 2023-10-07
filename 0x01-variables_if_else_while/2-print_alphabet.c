#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/* more headers goes there */

/* betty style doc for function main goes there */
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
