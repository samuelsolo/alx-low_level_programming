#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, LD;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

LD = n % 10;

if (LD > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, LD);
}
if (LD < 6 && LD != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LD);
}
if (LD == 0)
{
printf("Last digit of %d is %d and is 0\n", n, LD);
}
return (0);
}
