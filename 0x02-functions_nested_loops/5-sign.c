#include "main.h"

/*
* print_sign: Entry point
* @n: carrier variable
* Description: This function prints the sign of a number
* Return: 1 if the number is positive, o if the number is 0, and 
* -1 if the number is negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		return (0);
}
