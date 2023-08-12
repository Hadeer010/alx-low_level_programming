#include <stdio.h>
/**
 * main - Entry point function
 *
 * Return: Always 0 (no errors)
 */
int main(void)
{
int i, j;

i = 0;

while (i < 10)
{
j = i + 1;

while (j < 10)
{
putchar(i + '0');
putchar(j + '0');
if (i != 9 || j != 9)
{
putchar(',');
putchar(' ');
}
j++;
}
i++;
}
return (0);
}
