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

	while (length >= 0)
	{
		printf("%s", s[length - 1]);
		length--;
	}
}
