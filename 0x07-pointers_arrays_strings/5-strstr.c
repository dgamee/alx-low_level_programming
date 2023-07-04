#include <string.h>
#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: pointer of the null terminated string
 * @needle: pointer of a null terminated string
 * Return: rtns a pointer to the 1st char of the 1st occurance of needle is rtn
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

