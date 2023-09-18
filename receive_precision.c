#include "main.h"
/**
 * receive_precision - This function used to determine the precision.
 * @format: The required format.
 * @index: index.
 * @argumnts_list: The given arguments list.
 * Return: The value of precision.
 */
int receive_precision(const char *format, int *index, va_list argumnts_list)
{
	int value_of_precision = -1;
	int present_index = *index + 1;

	if (format[present_index] != '.')
		return (value_of_precision);
	value_of_precision = 0;
	for (present_index += 1; format[present_index] != '\0'; present_index++)
	{
		if (digit_checker(format[present_index]))
		{
			value_of_precision *= 10;
			value_of_precision += format[present_index] - '0';
		}
		else if (format[present_index] == '*')
		{
			present_index++;
			value_of_precision = va_arg(argumnts_list, int);
			break;
		}
		else
			break;
	}
	*index = present_index - 1;
	return (value_of_precision);
}
