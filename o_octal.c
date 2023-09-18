#include "main.h"
/**
 * o_octal - This function used to print the octal type.
 * @arg_type: The given arguments list.
 * @BUFF: array.
 * @f: flag.
 * @w: width.
 * @p: precision.
 * @s: size.
 * Return: characters printed numbers
 */
int o_octal(va_list arg_type, char BUFF[], int f, int w, int p, int s)
{
	int index_BUFF = LOCAL_BUFFER - 2;
	unsigned long int number = va_arg(arg_type, unsigned long int);
	unsigned long int first_number = number;

	neglect(w);
	number = cast_to_unsigned_size(number, s);
	if (number == 0)
		BUFF[index_BUFF--] = '0';
	BUFF[LOCAL_BUFFER - 1] = '\0';
	while (number > 0)
	{
		BUFF[index_BUFF--] = (number % 8) + '0';
		number /= 8;
	}
	if (f & hash_Flag && first_number != 0)
		BUFF[index_BUFF--] = '0';
	index_BUFF++;
	return (write_print_unsgned(0, index_BUFF, BUFF, f, w, p, s));
}
