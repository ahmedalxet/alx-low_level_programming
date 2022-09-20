#include "main.h"

/**
 * swap_int - a function that swaps the values of tow integers
 * @a: An integer input pointer
 * @b: An integer input pointer
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
