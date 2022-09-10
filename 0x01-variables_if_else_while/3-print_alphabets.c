#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char min;

	for (min = 'a'; min <= 'z'; min++)
		putchar(min);
	for (min = 'A'; min <= 'Z'; min++)
		putchar(min);
	putchar('\n');

	return (0);
}
