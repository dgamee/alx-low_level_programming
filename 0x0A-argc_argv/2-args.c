#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 *
 * @argc: hold the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
