#include "main.h"
/**
 * receive_size - This function used to determine the size
 * @format: The required format.
 * @index: index.
 * Return: The value of size.
 */
int receive_size(const char *format, int *index)
{
	int present_index = *index + 1, value_of_size = 0;

	if (format[present_index] == 'l')
		value_of_size = long_Size;
	else if (format[present_index] == 'h')
		value_of_size = short_Size;
	if (value_of_size == 0)
		*index = present_index - 1;
	else
		*index = present_index;
	return (value_of_size);
}
