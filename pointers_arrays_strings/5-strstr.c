#include "main.h"
int _strlen(char *s)
{
	int i;
	for (i = 0; *(s + i) != '\0'; ++i)
		;

	return (i);
}
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *arr;
	int len = _strlen(needle);

	i = 0;
	j = 0;
	while (haystack[i] != '\0' && needle[j] != '\0')
	{

		if (haystack[i] == needle[j])
		{

			i++;
			j++;
			arr = haystack + i;
		}

		else
		{
			j = 0;
			i++;
		}
	}

	if (j == len)
	{

		printf("%s %s", needle, arr);
		putchar('\n');
	}

	return NULL;
}
