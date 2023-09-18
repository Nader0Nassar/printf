#include "main.h"
/**
 * s_string - This function used to print string.
 * @arg_type: The given arguments list.
 * @BUFF: array.
 * @f: flag.
 * @w: width.
 * @p: precision.
 * @s: size.
 * Return: characters printed numbers
 */
int s_string(va_list arg_type, char BUFF[], int f, int w, int p, int s)
{
	int string_length = 0, index;
	char *string = va_arg(arg_type, char *);

	neglect(BUFF);
	neglect(f);
	neglect(w);
	neglect(p);
	neglect(s);
	if (string == NULL)
	{
		string = "(null)";
		if (p >= 6)
			string = "      ";
	}
	while (string[string_length] != '\0')
		string_length++;
	if (p >= 0 && p < string_length)
		string_length = p;
	if (w > string_length)
	{
		if (f & minus_Flag)
		{
			write(1, &string[0], string_length);
			for (index = w - string_length; index > 0; index--)
				write(1, " ", 1);
			return (w);
		}
		else
		{
			for (index = w - string_length; index > 0; index--)
				write(1, " ", 1);
			write(1, &string[0], string_length);
			return (w);
		}
	}
	return (write(1, string, string_length));
}
