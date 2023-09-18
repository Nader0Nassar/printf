#include "main.h"
/**
 * _printf - This function works as printf.
 * @format: The required format.
 * Return: Numbers of printed characters.
 */
int _printf(const char *format, ...)
{
	int index, counter = 0, numbers_of_printed_char = 0, index_of_BUFF = 0;
	int characters_flag, field_width, handle_precision, length_modifier;
	char write_BUFF[LOCAL_BUFFER];
	va_list argumnts_list;

	if (format == NULL)
		return (-1);
	va_start(argumnts_list, format);
	for (index = 0; format && format[index] != '\0'; index++)
	{
		if (format[index] != '%')
		{
			write_BUFF[index_of_BUFF++] = format[index];
			if (index_of_BUFF == LOCAL_BUFFER)
				write_print_BUFF(write_BUFF, &index_of_BUFF);
			numbers_of_printed_char++;
		}
		else
		{
			write_print_BUFF(write_BUFF, &index_of_BUFF);
			characters_flag = receive_all_flags(format, &index);
			field_width = receive_width(format, &index, argumnts_list);
			handle_precision = receive_precision(format, &index, argumnts_list);
			length_modifier = receive_size(format, &index);
			++index;
			counter = set_type_print(format, &index, argumnts_list, write_BUFF,
				characters_flag, field_width, handle_precision, length_modifier);
			if (counter == -1)
				return (-1);
			numbers_of_printed_char += counter;
		}
	}
	write_print_BUFF(write_BUFF, &index_of_BUFF);
	va_end(argumnts_list);
	return (numbers_of_printed_char);
}
