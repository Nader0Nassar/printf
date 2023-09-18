#include "main.h"
/**
 * write_print_hexadec - This function prints hexadecimal numbers
 * @arg_type: The given arguments list.
 * @hexa_array: Hexadecimal array.
 * @BUFF: array.
 * @f: flag.
 * @actual_f: Calculates active flags
 * @w: width.
 * @p: precision.
 * @s: size.
 * Return: characters printed numbers
 */
int write_print_hexadec(va_list arg_type, char hexa_array[], char BUFF[],
	int f, char actual_f, int w, int p, int s)
{
	int index = LOCAL_BUFFER - 2;
	unsigned long int number = va_arg(arg_type, unsigned long int);
	unsigned long int initial_value = number;

	neglect(w);
	number = cast_to_unsigned_size(number, s);
	if (number == 0)
		BUFF[index--] = '0';
	BUFF[LOCAL_BUFFER - 1] = '\0';
	while (number > 0)
	{
		BUFF[index--] = hexa_array[number % 16];
		number /= 16;
	}
	if (f & hash_Flag && initial_value != 0)
	{
		BUFF[index--] = actual_f;
		BUFF[index--] = '0';
	}
	index++;
	return (write_print_unsgned(0, index, BUFF, f, w, p, s));
}
