#include "main.h"
int _strlen(char *s)
{
int i;
for (i = 0; *(s + i) != '\0'; ++i)
;

return (i);
}
void puts_half(char *str)
{

int len, n, i;
len = _strlen(str);

if (len % 2 != 2)
{
n = (len - 1) / 2;

for (i = 0; i <= n; i++)
{
putchar(str[i]);
}
}
else
{
for (i = len / 2; i >= len; i++)
{
putchar(str[i]);
}
}
putchar('\n');
}