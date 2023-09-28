#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int n, x, p;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (x = 1; x <= 9; x++)
		{
			 _putchar('.');
			 _putchar(' ');
			 p = (n  * x);
			 if (p <= 9)
			 {
				 _putchar(' ');
			 }
			 else
			 {
				 _putchar((p / 10) + 48);
			 }
			 _putchar((p % 10) + 48);
		}
		_putchar('\n');
	}
}
