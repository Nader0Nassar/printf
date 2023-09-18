#include "main.h"
/**
 * cast_to_signed_size - This function obtains the required size.
 * @number: number.
 * @s: size.
 *
 * Return: Casted value of num
 */
long int cast_to_signed_size(long int number, int s)
{
	if (s == long_Size)
		return (number);
	else if (s == short_Size)
		return ((short)number);
	return ((int)number);
}
/**
 * cast_to_unsigned_size - This function obtains the required size
 * @number: number
 * @s: size
 * Return: required value
 */
long int cast_to_unsigned_size(unsigned long int number, int s)
{
	if (s == long_Size)
		return (number);
	else if (s == short_Size)
		return ((unsigned short)number);
	return ((unsigned int)number);
}
