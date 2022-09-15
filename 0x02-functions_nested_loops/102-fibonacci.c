#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	printf("%1d, %1d, ", fibonacci[0], fibonacci[1]);

	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		if (i == 49)
			printf("%1d\n", fibonacci[1]);
		else
			printf("%1d", fibonacci[1]);
	}

	return (0);
}
