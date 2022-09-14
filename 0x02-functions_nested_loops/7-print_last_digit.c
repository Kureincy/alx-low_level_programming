#include "main.h"

/**
 * print_last_digit -  check main
 * @r: Integer input
 * Description: This function prints the last digit of a number
 * Return: Last digit of a number r
 */
int print_last_digit(int r)
{
	int n;

	if (r < 0)
		n = -1 * (r % 10);
	else
		n = r % 10;

	putchar((n % 10) + '0');
	return (n % 10);
}
