#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: int
 * @o: int
 * Return: 0 or 1
 */
int check_p(int n, int o);
int is_prime_number(int n)
{
	return (check_p(n, 2));
}
/**
 * check_p - check number compared to n
 * @n: int
 * @o: int
 * Return: int
 */
int check_p(int n, int o)
{
	if (o >= n && n > 1)
	{
		return (1);
	}
	else if (n % o == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_p(n, o + 1));
	}
}
