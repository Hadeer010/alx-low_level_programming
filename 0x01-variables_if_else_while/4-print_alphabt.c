#include <stdio.h>
/**
 * main - Entry point function
 *
 * Return: Always 0 (no errors)
 */

int main(void)
{
	char lower;

	lower = 'a';
	while (lower <= 'z')
	{
		if (lower != 'q' || lower != 'e')
		{
			putchar(lower);
			lower++;
		}
	}
	putchar('\n');
	return (0);
}
