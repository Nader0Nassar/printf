#include "main.h"
/**
 * write_print_number_BUFF - This function prints numbers.
 * @i: index.
 * @B: array.
 * @f: flag.
 * @w: width.
 * @p: precision.
 * @l: length.
 * @np: pads.
 * @a: additional characters
 * Return: characters printed numbers
 */
int write_print_number_BUFF(int i, char B[], int f, int w, int p, int l,
	char np, char a)
{
	int index_BUFF, initial_pads = 1;

	if (p == 0 && i == LOCAL_BUFFER - 2 && B[i] == '0' && w == 0)
		return (0);
	if (p == 0 && i == LOCAL_BUFFER - 2 && B[i] == '0')
		B[i] = np = ' ';
	if (p > 0 && p < l)
		np = ' ';
	while (p > l)
		B[--i] = '0', l++;
	if (a != 0)
		l++;
	if (w > l)
	{
		for (index_BUFF = 1; index_BUFF < w - l + 1; index_BUFF++)
			B[index_BUFF] = np;
		B[index_BUFF] = '\0';
		if (f & minus_Flag && np == ' ')
		{
			if (a)
				B[--i] = a;
			return (write(1, &B[i], l) + write(1, &B[1], index_BUFF - 1));
		}
		else if (!(f & minus_Flag) && np == ' ')
		{
			if (a)
				B[--i] = a;
			return (write(1, &B[1], index_BUFF - 1) + write(1, &B[i], l));
		}
		else if (!(f & minus_Flag) && np == '0')
		{
			if (a)
				B[--initial_pads] = a;
			return (write(1, &B[initial_pads], index_BUFF - initial_pads) +
				write(1, &B[i], l - (1 - initial_pads)));
		}
	}
	if (a)
		B[--i] = a;
	return (write(1, &B[i], l));
}
