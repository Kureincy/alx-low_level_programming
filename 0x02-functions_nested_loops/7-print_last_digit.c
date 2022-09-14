#include "main.h"

/**
 * print_last_digit -  check main
 * @r: Integer input
 * Description: This function prints the last digit of a number
 * Return: Last digit of a number r
 */
int print_last_digit(int r)
{
	int last = r % 10;

	if (r < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
