#include <string.h>
#include "main.h"
char *str_concat(char *s1, char *s2)
{

	char *arr;
	arr = (char *)malloc(sizeof(char) * (strlen(s2) + strlen(s1) + 2));

	while (arr != NULL)
	{

		*arr++ = *s1++;
	}

	while (arr != NULL)
	{
		*arr++ = *s2++;
	}
}