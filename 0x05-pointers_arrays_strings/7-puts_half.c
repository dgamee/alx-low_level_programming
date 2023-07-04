#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: word to be printed in half
 *
 */

void puts_half(char *str)
{
	int length = strlen(str);
	char word;
	int i, n;

	if (length % 2 == 0)
	{
		n = (length - 1) / 2;
		for (i = n + 1; i < length; i++)
		{
			word = str[i];
			putchar(word);
		}
	}
	else
	{
		n = (length - 1) / 2;
		for (i = n + 1; i < length; i++)
		{
			word = str[i];
			putchar(word);
		}
	}
	putchar('\n');
}
