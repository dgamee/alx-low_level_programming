#include <string.h>
#include "main.h"

/**
  * memset - function that fills memory with a constant byte
  * @s: pointer of type char
  * @b: param of char datatype
  * @n: int datatype
  */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
