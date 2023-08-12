#include <stdio.h>
/**
 * main - Entry point function
 *
 * Return: Always 0 (no errors)
 */
int main(void)
{
int i, j;

i = 00;

while (i < 100)
{
j = i + 1;

while (j < 100)
{
putchar(i + '0');
putchar(j + '0');
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
