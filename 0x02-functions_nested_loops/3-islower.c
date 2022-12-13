#include "main.h"

/**
 * _islower - checks if a character is lowercase or not
 * @c: the character
 *
 * Return: 1 if letter is lowercase and 0 if it's not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
