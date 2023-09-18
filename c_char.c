#include "main.h"
/**
 * c_char - Prints a char
 * @arg_type: The given arguments list.
 * @BUFF: array.
 * @f: flag.
 * @w: width.
 * @p: precision.
 * @s: size.
 * Return: characters printed numbers
 */
int c_char(va_list arg_type, char BUFF[], int f, int w, int p, int s)
{
	char characters = va_arg(arg_type, int);

	return (write_print_char(characters, BUFF, f, w, p, s));
}
