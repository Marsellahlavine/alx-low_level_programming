#include "main.h"

/**
 * more numbers - printing more numbers
 */
void more numbers(void)
{
int x, y;

for (x = 0; x < 10; x++)
{
for (y = 0; y < 15; y++)
{
_putchar(y + '0');
}
_putchar('\n');
}
}
