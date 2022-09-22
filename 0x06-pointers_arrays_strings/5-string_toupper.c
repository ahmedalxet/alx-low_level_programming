#include "main."

/**
 * string_toupper - a function that changes all lowercase letters of a  string
 * to upper case
 * @s: an input string
 * Return: char pointer to converted string
 */
char *string_toupper(char *s)
{
	int i, j;
	char letter;

	i = 0;
	while (str[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		letter = str[j];
		if (letter >= 'a' && letter <= 'z')
		{
			letter -= 32;
			str[j] = letter;
		}
	}

	return (str);}
