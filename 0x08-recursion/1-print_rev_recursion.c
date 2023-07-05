#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string in reverse
 * @s: a string
 */

void _print_rev_recursion(char *s)
{
	int length = strlen(s);
	int i = 1

	if (length >= 0)
	{
		putchar(s[length - i]);
		i++;
		_print_rev_recursion(char *s);
	}
}
