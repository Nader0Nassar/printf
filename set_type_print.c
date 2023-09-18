#include "main.h"
/**
 * set_type_print - This function used to determine the type
 * @format: The required format.
 * @arg_list: The given arguments list.
 * @index: index.
 * @BUFF: array.
 * @f: flags.
 * @w: width.
 * @p: precision
 * @s: size.
 * Return: one , two
 */
int set_type_print(const char *format, int *index, va_list arg_list,
	char BUFF[], int f, int w, int p, int s)
{
	int f_index, nums_char = -1, length = 0;
	ft_type f_type[] = {
		{'c', c_char}, {'s', s_string}, {'%', percentage_sign},
		{'i', id_integer}, {'d', id_integer}, {'b', b_binary},
		{'u', u_unsigned}, {'o', o_octal}, {'x', x_lower_hexadec},
		{'X', X_UPPER_HEXADEC}, {'p', p_pointer}, {'S', S_nonprintable},
		{'r', r_reverse}, {'R', R_rot13}, {'\0', NULL}
	};

	for (f_index = 0; f_type[f_index].ft != '\0'; f_index++)
		if (format[*index] == f_type[f_index].ft)
			return (f_type[f_index].fun(arg_list, BUFF, f, w, p, s));
	if (f_type[f_index].ft == '\0')
	{
		if (format[*index] == '\0')
			return (-1);
		length += write(1, "%%", 1);
		if (format[*index - 1] == ' ')
			length += write(1, " ", 1);
		else if (w)
		{
			--(*index);
			while (format[*index] != ' ' && format[*index] != '%')
				--(*index);
			if (format[*index] == ' ')
				--(*index);
			return (1);
		}
		length += write(1, &format[*index], 1);
		return (length);
	}
	return (nums_char);
}
