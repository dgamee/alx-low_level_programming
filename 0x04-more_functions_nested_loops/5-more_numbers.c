#include <stdio.h>
#include "main.h"
/**
 * more_numbers - print 10 times the numbers from 0 to 14
 *
 */

void more_numbers(void)
{
	int i = 0;

	char j;

	while (i < 10)
	{
		for (j = '0'; j <= '14'; j++)
		{
			putchar(j);
		}
		i++;
		putchar('\n');
	}
}
