#include "main.h"

/**
 * main - Entry point
 * Description: prints "_putchar \n"
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		putchar(word[i]);
	putchar('\n');

	return (0);
}
