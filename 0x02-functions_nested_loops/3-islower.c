#include "main.h"

/**
* _islower - Entry point
* Description: Checks if a character is lower case
* @c: the integer value it receives
* Return: 1 if is lowercase. or 0 if is uppercaase
*/

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
