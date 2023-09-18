#include "main.h"
/**
 * nonprintable_hexa - This function affix ascii to buffer.
 * @BUFF: array.
 * @index: index.
 * @value_ascii: value of ascii.
 * Return: 3.
 */
int nonprintable_hexa(char value_ascii, char BUFF[], int index)
{
	char hexa_array[] = "0123456789ABCDEF";

	if (value_ascii < 0)
		value_ascii *= -1;
	BUFF[index++] = '\\';
	BUFF[index++] = 'x';
	BUFF[index++] = hexa_array[value_ascii / 16];
	BUFF[index] = hexa_array[value_ascii % 16];
	return (3);
}
