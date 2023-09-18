#include "main.h"
/**
 * printable_checker - This function checks printability.
 * @character: Char to be evaluated.
 * Return: zero for nonprintable, one otherwise
 */
int printable_checker(char character)
{
	if (character >= 32 && character < 127)
		return (1);
	return (0);
}
