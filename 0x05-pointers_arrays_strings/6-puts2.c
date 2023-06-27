#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - prints every other character of a str starting with the first char
 * @str: param
 *
 */

void puts2(char *str)
{
	int length = strlen(str);
	int i = 0;

	for (i = 0; i < length;)
	{
		char word = str[i];

		i += 2;
		putchar(word);
	}
	putchar('\n');
}
