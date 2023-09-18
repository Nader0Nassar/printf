#include "main.h"
/**
 * b_binary - This function used to print binary numbers.
 * @arg_type: The given arguments list.
 * @BUFF: array.
 * @f: flag.
 * @w: width.
 * @p: precision.
 * @s: size.
 * Return: characters printed numbers
 */
int b_binary(va_list arg_type, char BUFF[], int f, int w, int p, int s)
{
	unsigned int num_1, num_2, index, add;
	unsigned int array[32];
	int printed_nums;

	neglect(BUFF);
	neglect(f);
	neglect(w);
	neglect(p);
	neglect(s);
	num_1 = va_arg(arg_type, unsigned int);
	num_2 = 2147483648;
	array[0] = num_1 / num_2;
	for (index = 1; index < 32; index++)
	{
		num_2 /= 2;
		array[index] = (num_1 / num_2) % 2;
	}
	for (index = 0, add = 0, printed_nums = 0; index < 32; index++)
	{
		add += array[index];
		if (add || index == 31)
		{
			char new_char = '0' + array[index];

			write(1, &new_char, 1);
			printed_nums++;
		}
	}
	return (printed_nums);
}
