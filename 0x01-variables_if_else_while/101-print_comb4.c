#include <stdio.h>
/**
 * main - Entry point function
 *
 * Return: Always 0 (no errors)
 */
int main(void)
{
int i, j, h;
i = 0;
while (i < 10)
{
j = i + 1;
while (j < 10)
{
h = j + 1;
while (h < 10)
{
putchar(i + '0');
putchar(j + '0');
putchar(h + '0');
if (i != 7 || j != 8 || h != 9)
{
putchar(',');
putchar(' ');
}
h++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
