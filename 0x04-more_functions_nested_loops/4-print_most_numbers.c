#include "main.h"

/**
*print_must_numbers - prints the numbers,  from 0to 9, 
*except 2 and 4, followed by anew line
*/
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
}
_putchar('\n');
}
