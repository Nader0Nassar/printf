#include "main.h"
/**
 * S_nonprintable - This function used to print nonprintable.
 * @arg_type: The given arguments list.
 * @BUFF: array.
 * @f: flag.
 * @w: width.
 * @p: precision.
 * @s: size.
 * Return: characters printed numbers
 */
int S_nonprintable(va_list arg_type, char BUFF[], int f, int w, int p, int s)
{
	int index = 0, away = 0;
	char *string = va_arg(arg_type, char *);

	neglect(f);
	neglect(w);
	neglect(p);
	neglect(s);
	if (string == NULL)
		return (write(1, "(null)", 6));
	while (string[index] != '\0')
	{
		if (printable_checker(string[index]))
			BUFF[index + away] = string[index];
		else
			away += nonprintable_hexa(string[index], BUFF, index + away);
		index++;
	}
	BUFF[index + away] = '\0';
	return (write(1, BUFF, index + away));
}
