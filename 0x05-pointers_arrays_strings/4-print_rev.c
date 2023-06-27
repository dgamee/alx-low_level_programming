#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - print a string in reverse follwed by a new line
 * @s: param of character type
 *
 */

void print_rev(char *s)
{
	int strlength = strlen(s);
	char strreversed[strlength + 1];
	int i = 0;

	while (strlength > 0)
	{
		strreversed[i] = s[strlength - 1];
		strlength--;
		i++;
	}
	strreversed[i] = '\0';
	printf("%s\n", strreversed);
}
