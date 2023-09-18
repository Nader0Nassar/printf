#include "main.h"
/**
 * percentage_sign - This function used to print percentage sign.
 * @arg_type: The given arguments list.
 * @BUFF: array.
 * @f: flag.
 * @w: width.
 * @p: precision.
 * @s: size.
 * Return: characters printed numbers
 */
int percentage_sign(va_list arg_type, char BUFF[], int f, int w, int p, int s)
{
	neglect(arg_type);
	neglect(BUFF);
	neglect(f);
	neglect(w);
	neglect(p);
	neglect(s);
	return (write(1, "%%", 1));
}
