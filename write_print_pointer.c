#include "main.h"

/**
 * write_print_pointer - This function prints address of memory.
 * @BUFF: Arrays of chars
 * @index_BUFF: BUFF index.
 * @p_len: length.
 * @w: Width.
 * @f: flag.
 * @p_pads: pads.
 * @additional_char: additional characters.
 * @initial_pads: initial values of pads.
 * Return: characters printed numbers
 */
int write_print_pointer(char BUFF[], int index_BUFF, int p_len, int w, int f,
	char p_pads, char additional_char, int initial_pads)
{
	int index;

	if (w > p_len)
	{
		for (index = 3; index < w - p_len + 3; index++)
			BUFF[index] = p_pads;
		BUFF[index] = '\0';
		if (f & minus_Flag && p_pads == ' ')
		{
			BUFF[--index_BUFF] = 'x';
			BUFF[--index_BUFF] = '0';
			if (additional_char)
				BUFF[--index_BUFF] = additional_char;
			return (write(1, &BUFF[index_BUFF], p_len) + write(1, &BUFF[3], index - 3));
		}
		else if (!(f & minus_Flag) && p_pads == ' ')
		{
			BUFF[--index_BUFF] = 'x';
			BUFF[--index_BUFF] = '0';
			if (additional_char)
				BUFF[--index_BUFF] = additional_char;
			return (write(1, &BUFF[3], index - 3) + write(1, &BUFF[index_BUFF], p_len));
		}
		else if (!(f & minus_Flag) && p_pads == '0')
		{
			if (additional_char)
				BUFF[--initial_pads] = additional_char;
			BUFF[1] = '0';
			BUFF[2] = 'x';
			return (write(1, &BUFF[initial_pads], index - initial_pads) +
				write(1, &BUFF[index_BUFF], p_len - (1 - initial_pads) - 2));
		}
	}
	BUFF[--index_BUFF] = 'x';
	BUFF[--index_BUFF] = '0';
	if (additional_char)
		BUFF[--index_BUFF] = additional_char;
	return (write(1, &BUFF[index_BUFF], LOCAL_BUFFER - index_BUFF - 1));
}
