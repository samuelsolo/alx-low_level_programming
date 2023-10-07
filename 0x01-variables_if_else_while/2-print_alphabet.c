#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/* betty style doc for function main goes there 
 * 
 * main - does something 
 * returns alphabet
 *
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
