#include "main.h"

/**
* print_sign - check main
* @n: carrier variable
* Description: prints the sign of a number
* Return: 1 if n>0, 0 if n == 0, -1 if n<0
*/

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
