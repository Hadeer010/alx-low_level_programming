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
       if (lower != 'q' || lower != 'e')
	{
		while (lower <= 'z')
		{
			putchar(lower);
			lower++;
		}
       }
       putchar('\n');
       return (0);
}
