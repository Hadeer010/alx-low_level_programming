#include "main.h"
/**
 * factorial - finde factorials
 * @n: the integer
 * Return: the interger
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
