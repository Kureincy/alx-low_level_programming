#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point,Prints out the last part of a quote in the standard error.
* Return: Always 1 if Success
*/
int main(void)
{
	write (2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n");
	return(1);
}
