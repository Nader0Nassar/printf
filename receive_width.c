#include "main.h"
/**
 * receive_width - This function used to determine the width
 * @format: The required format.
 * @index: index.
 * @argumnts_list: The given arguments list.
 * Return: The value of width.
 */
int receive_width(const char *format, int *index, va_list argumnts_list)
{
	int present_index, value_of_width = 0;

	present_index = *index + 1;
	for (; format[present_index] != '\0'; present_index++)
	{
		if (digit_checker(format[present_index]))
		{
			value_of_width *= 10;
			value_of_width += format[present_index] - '0';
		}
		else if (format[present_index] == '*')
		{
			present_index++;
			value_of_width = va_arg(argumnts_list, int);
			break;
		}
		else
			break;
	}
	*index = present_index - 1;
	return (value_of_width);
}
