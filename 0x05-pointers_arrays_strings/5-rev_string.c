#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - print a string in reverse follwed by a new line
 * @s: param of character type
 *
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i = 0;
	int end = length - 1;

	while (i < end)
	{
		char word = s[i];

		s[i] = s[end];
		s[end] = word;

		i++;
		end--;
	}
}
