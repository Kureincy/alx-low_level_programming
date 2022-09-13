#include "main.h"

/**
 * _isalpha - Entry point
 * @c: the integer value it receives
 * Description: function returns 1 if the alphabet is a
 * letter, lowecase, or uppercase.
 * Return: 1 if true or 0 if false
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
