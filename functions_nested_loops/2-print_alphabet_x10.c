#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print alphabet
 */
void print_alphabet_x10(void)
{
char i;
int k;
for (k = 0; k < 10; k++)
{
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
}
