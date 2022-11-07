#include <stdio.h>
#include "main.h"
#define UNUSED(x) (void)(x)
/**
 * main - Print the name of the program
 * @argc: argumentc
 * @argv: vector of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
