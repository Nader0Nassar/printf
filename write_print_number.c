#include "main.h"
/**
 * write_print_number - This function prints number.
 * @neg_checker: negative checker.
 * @index: index.
 * @BUFF: array.
 * @f: flag.
 * @w: width.
 * @p: precision.
 * @s: size.
 * Return: characters printed numbers
 */
int write_print_number(int neg_checker, int index, char BUFF[], int f,
	int w, int p, int s)
{
	int number_length = LOCAL_BUFFER - index - 1;
	char number_pads = ' ', additional_chars = 0;

	neglect(s);
	if ((f & zero_Flag) && !(f & minus_Flag))
		number_pads = '0';
	if (neg_checker)
		additional_chars = '-';
	else if (f & plus_Flag)
		additional_chars = '+';
	else if (f & space_Flag)
		additional_chars = ' ';
	return (write_print_number_BUFF(index, BUFF, f, w, p,
		number_length, number_pads, additional_chars));
}
