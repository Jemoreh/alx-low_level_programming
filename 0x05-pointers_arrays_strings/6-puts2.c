#include "main.h"

/**
*puts2 - prints one char out of2 of a string
*followed by a new line
*@str: strings to print char from
*/
void puts2(char *str)
{
int len, i;
len = 0;
while (str[len] != '\0')
{
len++;
}
for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
