#include "main.h"
/**
 * write_print_unsgned - This function prints unsigned number.
 * @neg_checker: check negativity
 * @index: index of BUFF
 * @BUFF: array.
 * @f: flag.
 * @w: width.
 * @p: precision.
 * @s: size.
 * Return: characters printed numbers
 */
int write_print_unsgned(int neg_checker, int index, char BUFF[], int f,
	int w, int p, int s)
{
	int num_length = LOCAL_BUFFER - index - 1, index_BUFF = 0;
	char num_pads = ' ';

	neglect(neg_checker);
	neglect(s);
	if (p == 0 && index == LOCAL_BUFFER - 2 && BUFF[index] == '0')
		return (0);
	if (p > 0 && p < num_length)
		num_pads = ' ';
	while (p > num_length)
	{
		BUFF[--index] = '0';
		num_length++;
	}
	if ((f & zero_Flag) && !(f & minus_Flag))
		num_pads = '0';
	if (w > num_length)
	{
		for (index_BUFF = 0; index_BUFF < w - num_length; index_BUFF++)
			BUFF[index_BUFF] = num_pads;
		BUFF[index_BUFF] = '\0';
		if (f & minus_Flag)
			return (write(1, &BUFF[index], num_length) +
				write(1, &BUFF[0], index_BUFF));
		else
			return (write(1, &BUFF[0], index_BUFF) +
				write(1, &BUFF[index], num_length));
	}
	return (write(1, &BUFF[index], num_length));
}
