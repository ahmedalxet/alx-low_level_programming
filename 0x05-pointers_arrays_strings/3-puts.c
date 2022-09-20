#include "main.h"
#include <stdio.h>
/**
 * _puts - prints string
 * @str: input string to print
 * Description: prints string to stdout
 * Return: nothing
 **/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		puts(str[i]);
		i++;
	}
	puts('\n');
}
