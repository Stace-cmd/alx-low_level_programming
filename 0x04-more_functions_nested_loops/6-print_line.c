#include "main.h"
/**
* print_line - Prints a straight line in the terminal
* @n: The number of times to print the '_'
*/
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}

