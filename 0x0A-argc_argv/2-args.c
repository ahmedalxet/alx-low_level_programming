#include "main.h"
#include <stdio.h>

/**
 * main - All arguments should be printed, including the first one
 * only print one argument per line, ending with a new line
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
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
