#include "main.h"

/**
 * main - Check the code
 * Description: It prints the alphabet in lower case followed by a new line
 * Return: void
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	putchar('\n');
}
