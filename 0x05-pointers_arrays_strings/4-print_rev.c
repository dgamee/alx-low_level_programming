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
	int i;

	for (i = strlength; i > 0; i--)
	{
		int cat = i - 1;

		putchar(s[cat]);
	}
	putchar('\n');
}
