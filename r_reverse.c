#include "main.h"
/**
 * r_reverse - This function used to print reversed string.
 * @arg_type: The given arguments list.
 * @BUFF: array.
 * @f: flag.
 * @w: width.
 * @p: precision.
 * @s: size.
 * Return: characters printed numbers
 */
int r_reverse(va_list arg_type, char BUFF[], int f, int w, int p, int s)
{
	char *string;
	int index, sum = 0;

	neglect(BUFF);
	neglect(f);
	neglect(w);
	neglect(s);
	string = va_arg(arg_type, char *);
	if (string == NULL)
	{
		neglect(p);
		string = ")Null(";
	}
	for (index = 0; string[index]; index++)
		;
	for (index = index - 1; index >= 0; index--)
	{
		char z = string[index];

		write(1, &z, 1);
		sum++;
	}
	return (sum);
}
