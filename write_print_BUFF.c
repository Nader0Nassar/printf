#include "main.h"
/**
 * write_print_BUFF - This function used to print the chars_array.
 * @chars_array: Charactars array.
 * @index_buffer: Buffer index.
 */
void write_print_BUFF(char chars_array[], int *index_buffer)
{
	if (*index_buffer > 0)
		write(1, &chars_array[0], *index_buffer);
	*index_buffer = 0;
}
