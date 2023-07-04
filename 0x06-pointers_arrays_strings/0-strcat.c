#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - functions that concatenate two strings
 * @dest: pointer of typer char
 * @src: pointer of type char
 *
 * Return: returns a string
 *
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
