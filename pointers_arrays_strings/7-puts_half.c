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

int len, n, i, j;
len = _strlen(str);

if (len % 2 != 2)
{
n = (len - 1) / 2;

for (i = n + 1; i != len; i++)
{
putchar(str[i]);
}
}
else if (!str[0])
{
putchar('\n');
}

else
{
for (j = len / 2; j != len - 1; j++)
{
putchar(str[j]);
}
}

putchar('\n');
}
