#include "main.h"
/**
 * u_unsigned - This function used to print unsigned numbers.
 * @arg_type: The given arguments list.
 * @BUFF: array.
 * @f: flag.
 * @w: width.
 * @p: precision.
 * @s: size.
 * Return: characters printed numbers
 */
int u_unsigned(va_list arg_type, char BUFF[], int f, int w, int p, int s)
{
	int index = LOCAL_BUFFER - 2;
	unsigned long int numbers = va_arg(arg_type, unsigned long int);

	numbers = cast_to_unsigned_size(numbers, s);
	if (numbers == 0)
		BUFF[index--] = '0';
	BUFF[LOCAL_BUFFER - 1] = '\0';
	while (numbers > 0)
	{
		BUFF[index--] = (numbers % 10) + '0';
		numbers /= 10;
	}
	index++;
	return (write_print_unsgned(0, index, BUFF, f, w, p, s));
}
