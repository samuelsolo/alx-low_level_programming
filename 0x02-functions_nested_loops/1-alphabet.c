#include "main.h"

/*
 * void - prints the alphabet in lowercase followed by a new line
 *
 */
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
