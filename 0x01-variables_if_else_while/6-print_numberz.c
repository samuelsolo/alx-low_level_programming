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
	int n = 0;

	while (n <= 9)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}
