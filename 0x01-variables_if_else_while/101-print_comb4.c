#include <stdio.h>
/**
 * main - empty point
 *
 * Return:Always 0
 */
int main(void)
{
int digit1, digit2, digit3;
for (digit 1 =0; digit1 < 8; digit 1++)
{
for digit 2 = digit 1 + 1; digit2 <9; digit2++)
{
for digit 3 = digit2 + 1; digit3 < 10; digit 3++)
{
putchar((digit1 % 10 + '0');
putchar((digit2 % 10 + '0');
putchar((digit3 % 10) + '0'
if (digit1 == 7 && digit 2 == 8 && digit3 ==9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
