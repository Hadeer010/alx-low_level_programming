#include "main.h"
/**
 * more_numbers - prints  for a digit 0 through 14 for 10 times
 * * Return: 1 if successful c is a digit, 0 if isn't a digit
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			i = k;
			if (k > 9)
			{
				_putchar(i + 48);
				i = k % 10;
			}
			_putchar(i + 48);
		}
		putchar('\n');
	}
}
