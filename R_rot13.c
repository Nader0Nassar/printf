#include "main.h"
/**
 * R_rot13 - This function used to print 13 rotated string.
 * @arg_type: The given arguments list.
 * @BUFF: array.
 * @f: flag.
 * @w: width.
 * @p: precision.
 * @s: size.
 * Return: characters printed numbers
 */
int R_rot13(va_list arg_type, char BUFF[], int f, int w, int p, int s)
{
	char character;
	char *string;
	unsigned int index_1, index_2;
	int sum = 0;
	char string_input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char string_output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	string = va_arg(arg_type, char *);
	neglect(BUFF);
	neglect(f);
	neglect(w);
	neglect(p);
	neglect(s);
	if (string == NULL)
		string = "(AHYY)";
	for (index_1 = 0; string[index_1]; index_1++)
	{
		for (index_2 = 0; string_input[index_2]; index_2++)
		{
			if (string_input[index_2] == string[index_1])
			{
				character = string_output[index_2];
				write(1, &character, 1);
				sum++;
				break;
			}
		}
		if (!string_input[index_2])
		{
			character = string[index_1];
			write(1, &character, 1);
			sum++;
		}
	}
	return (sum);
}
