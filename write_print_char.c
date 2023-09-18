#include "main.h"
/**
 * write_print_char - This function used to print chars.
 * @character: character to be printed.
 * @BUFF: array.
 * @f: flag.
 * @w: width.
 * @p: precision.
 * @s: Size.
 * Return: characters printed numbers
 */
int write_print_char(char character, char BUFF[], int f, int w, int p, int s)
{
	int index = 0;
	char character_pads = ' ';

	neglect(p);
	neglect(s);
	if (f & zero_Flag)
		character_pads = '0';
	BUFF[index++] = character;
	BUFF[index] = '\0';
	if (w > 1)
	{
		BUFF[LOCAL_BUFFER - 1] = '\0';
		for (index = 0; index < w - 1; index++)
			BUFF[LOCAL_BUFFER - index - 2] = character_pads;
		if (f & minus_Flag)
			return (write(1, &BUFF[0], 1) +
					write(1, &BUFF[LOCAL_BUFFER - index - 1], w - 1));
		else
			return (write(1, &BUFF[LOCAL_BUFFER - index - 1], w - 1) +
					write(1, &BUFF[0], 1));
	}
	return (write(1, &BUFF[0], 1));
}
