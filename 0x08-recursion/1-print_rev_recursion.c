#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string in reverse
 * @s: a string
 */

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		/**
		 *  Base case: stop recursion when reaching the end of the string
		 */
		return;
	}
	/**
	  * recursively call with the next character
	  */
	_print_rev_recursion(s + 1);
	/**
	 * print the current character
	 */
	putchar(*s);
}
