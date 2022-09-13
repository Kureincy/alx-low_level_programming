#include "main.h"

/**
 * main - check the code
 *Description: Functions uses putchar function to print
 * alphabet in lowercase 10 times
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}

	return (0);
}
