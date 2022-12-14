#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all the numbers from input to 98
 * @n: number input
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	else
		return (98);
}
