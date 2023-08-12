#include <stdio.h>
/**
 * main - Entry point function
 *
 * Return: Always 0 (no errors)
 */
int main(void)
{
	char reverse = 'z';

	while (reverse >= 'a')
	{
		putchar(reverse);
		reverse--;
	}
	putchar('\n');
	return (0);
}
