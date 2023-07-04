#include <string.h>
#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: size
 * Return: copies n bytes from memory area src to memory area dst
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
