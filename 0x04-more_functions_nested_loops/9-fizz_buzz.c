#include "main.h"
#include <stdio.h>
/**
 * main - print number 1 to 100
 * numbers are % for 3 is replaced by Fizz
 * numbers are % for 5 are replaced with Buzz
 * numbers are % for 3 and 5 replaced with FizzBuzz
 * Return: always 0 (No Errors)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0 && n % 5 != 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0 && n % 3 != 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
