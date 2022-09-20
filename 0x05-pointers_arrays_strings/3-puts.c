#include "main.h"

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
		stdout(str[i]);
		i++;
	}
	stdout('\n');
}
