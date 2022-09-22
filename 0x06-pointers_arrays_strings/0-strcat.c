#include "main.h"

/**
 * _strcat - check the code
 * @dest: destination
 * @src: source
 * Return: Concatinated text.
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
