#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive")
	else if (i == 0)
		printf("%d is zero")
	else
		printf("%d iz negative")
		
}
#endif /* MAIN_H */
