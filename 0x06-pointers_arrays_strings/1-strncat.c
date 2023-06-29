#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - functions that concatenate two strings
 * @dest: pointer of typer char
 * @src: pointer of type char
 * @n: most bytes from src
 *
 * Return: returns a string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	strncast(dest, src, n)
	{
		int dest_len = strlen(dest);
		int i = 0;

		while (i < n && src[i] != '\0')
		{
			dest[dest_len + i] = src[i];
		}
		dest[dest_leen + i] = '\0';
		return (dest);
	}
}
