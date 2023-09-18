#include "main.h"
/**
 * x_lower_hexadec - This function prints lower case hexadecimal
 * @arg_type: The given arguments list.
 * @BUFF: array.
 * @f: flag.
 * @w: width.
 * @p: precision.
 * @s: size.
 * Return: characters printed numbers
 */
int x_lower_hexadec(va_list arg_type, char BUFF[], int f, int w, int p, int s)
{
	return (write_print_hexadec(arg_type, "0123456789abcdef", BUFF,
		f, 'x', w, p, s));
}
