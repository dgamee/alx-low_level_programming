#include <string.h>
#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer of string
 * @c: occurance of the character 'c'
 * Return: returns a pointer to first occurance of the character
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
