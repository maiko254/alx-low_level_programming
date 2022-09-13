#include "main.h"

/**
 * _islower - Checks for lowercase character.
 *
 * Return:1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
