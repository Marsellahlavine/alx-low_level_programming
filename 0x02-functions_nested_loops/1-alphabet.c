nclude "main.h"

/**
 * print_alphabet -print a-z
 *
 * Return: Always void
 */
void print_alphabet(void)
{
int j;

for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');

return (0);
}
