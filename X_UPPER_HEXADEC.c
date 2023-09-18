#include "main.h"
/**
 * X_UPPER_HEXADEC - This function prints upper case hexadecimal
 * @arg_type: The given arguments list.
 * @BUFF: array.
 * @f: flag.
 * @w: width.
 * @p: precision.
 * @s: size.
 * Return: characters printed numbers
 */
int X_UPPER_HEXADEC(va_list arg_type, char BUFF[], int f, int w, int p, int s)
{
	return (write_print_hexadec(arg_type, "0123456789ABCDEF", BUFF,
		f, 'X', w, p, s));
}
