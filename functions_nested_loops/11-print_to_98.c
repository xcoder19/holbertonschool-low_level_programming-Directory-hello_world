#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural number
 * @n: integer
 * Return: On success the natural numbers.
 */

void print_to_98(int n)
{

while (n > 98)
{
n = n - 1;
_putchar('0' + n);
_putchar(',');
}
while (n < 98)
{
n = n + 1;
_putchar('0' + n);
_putchar(',');
}
}
