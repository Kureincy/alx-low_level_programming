#include "main.h"

/**
 * _isalpha - Entry point
 * @c: the integer value it receives
 * Description: function returns 1 if the alphabet is a
 * letter, lowecase, or uppercase.
 * Return: 1 if true or 0 if false
 */

int _islapha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
			else
				isletter = 0;
		}
	}
	return (isletter);
}
