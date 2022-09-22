#include "main.h"

/**
 * rot13 -  a function that encodes a string using rot13.
 * @s: An input string to encode using rot13
 * Return: An encode string
 */
char *rot13(char *s)
{
	char c[] = {"NOPQRSTUVWXYZABCDEFGHIJKLM[\\]^_`nopqrstuvwxyzabcdefghijklm"};

	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (src[i] >= 'A' && src[i] <= 'z')
			src[i] = c[src[i] - 'A'];
	}
	return (src);
}
