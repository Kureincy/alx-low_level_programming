#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: a function that prints_alphabet,
 * in lower case followed by a new line
 * Return: void
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
