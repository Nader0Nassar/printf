#include "main.h"
/**
 * digit_checker - This function checks if c is digit.
 * @checked_input: checked input.
 * Return: one for digits , zero for others
 */
int digit_checker(char checked_input)
{
	if (checked_input >= '0' && checked_input <= '9')
		return (1);
	return (0);
}
