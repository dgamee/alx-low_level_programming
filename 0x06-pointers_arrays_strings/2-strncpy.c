#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: pointer of string to be copied to
 * @src: pointer of string to be copied fro
 * @n: at most n bytes of src are copied
 *
 * Return: Return a string
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
