#include<stdlib.d>
#include<time.h>
#include<stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main- it is where the program starts
 *
 * Description: a random number is generated and at the end
 * it prints if its positive, negative or zero
 * Return: positive or negative
 */


int main(void)
{

int n;

srand(time(o));
n = rand() - RAND_MAX / 2;
 /* your code goes there */

if (n > 0)
{
	printf("%d is positive\n", n);
}
else
{
	if (n == 0);
{
	printf("%d is zero\n", n);
}
else
{
	if (n < 0);
{
	printf("%d is negative\n", n);
}
}
}
return (0);
}
