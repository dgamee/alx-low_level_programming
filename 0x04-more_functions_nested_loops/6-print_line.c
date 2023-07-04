#include <stdio.h>
#include "main.h"

/**
 * print_line - function draws a straight line in the terminal
 * @n: draws the line based on the value passed
 *
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
	}
	putchar('\n');
}
