#include "main.h"
/**
 * more_numbers - prints  for a digit 0 through 14 for 10 times
 * * Return: 1 if successful c is a digit, 0 if isn't a digit
 */
void more_numbers(void)
{
	int i, j, k;

	for (j = 1; j <= 10; j++)
	{
		for (k = 0; k <= 14; k++)
		{
			i = k;
			if (k > 9)
			{
				_putchar(i + 48);
				i = k % 10;
			}
			_putchar(i + 48);
		}
		_putchar('\n');
	}
}
