#include "main.h"
/**
 * id_integer - This function prints int numbers.
 * @arg_type: The given arguments list.
 * @BUFF: array.
 * @f: flag.
 * @w: width.
 * @p: precision.
 * @s: size.
 * Return: characters printed numbers
 */
int id_integer(va_list arg_type, char BUFF[], int f, int w, int p, int s)
{
	int index = LOCAL_BUFFER - 2;
	int neg_checker = 0;
	long int number = va_arg(arg_type, long int);
	unsigned long int pos_number;

	number = cast_to_signed_size(number, s);
	if (number == 0)
		BUFF[index--] = '0';
	BUFF[LOCAL_BUFFER - 1] = '\0';
	pos_number = (unsigned long int)number;
	if (number < 0)
	{
		pos_number = (unsigned long int)((-1) * number);
		neg_checker = 1;
	}
	while (pos_number > 0)
	{
		BUFF[index--] = (pos_number % 10) + '0';
		pos_number /= 10;
	}
	index++;
	return (write_print_number(neg_checker, index, BUFF, f, w, p, s));
}
