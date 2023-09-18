#include "main.h"
/**
 * p_pointer - This function used to print pointer.
 * @arg_type: The given arguments list.
 * @BUFF: array.
 * @f: flag.
 * @w: width.
 * @p: precision.
 * @s: size.
 * Return: characters printed numbers
 */
int p_pointer(va_list arg_type, char BUFF[], int f, int w, int p, int s)
{
	char additional_char = 0, char_pads = ' ';
	int index = LOCAL_BUFFER - 2, char_length = 2, initial_pads = 1;
	unsigned long address_number;
	char array[] = "0123456789abcdef";
	void *address_value = va_arg(arg_type, void *);

	neglect(w);
	neglect(s);
	if (address_value == NULL)
		return (write(1, "(nil)", 5));
	BUFF[LOCAL_BUFFER - 1] = '\0';
	neglect(p);
	address_number = (unsigned long)address_value;
	while (address_number > 0)
	{
		BUFF[index--] = array[address_number % 16];
		address_number /= 16;
		char_length++;
	}
	if ((f & zero_Flag) && !(f & minus_Flag))
		char_pads = '0';
	if (f & plus_Flag)
		additional_char = '+', char_length++;
	else if (f & space_Flag)
		additional_char = ' ', char_length++;
	index++;
	return (write_print_pointer(BUFF, index, char_length,
		w, f, char_pads, additional_char, initial_pads));
}
