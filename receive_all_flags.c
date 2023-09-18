#include "main.h"
/**
 * receive_all_flags - This function used to determine active flags
 * @format: The required format.
 * @index: Component flag index.
 * Return: All required flags:
 */
int receive_all_flags(const char *format, int *index)
{
	int flage_items, present_index, nums_of_flags = 0;
	const int values_flag[] = {plus_Flag, minus_Flag, hash_Flag,
	zero_Flag, space_Flag, 0};
	const char chars_flag[] = {'+', '-', '#', '0', ' ', '\0'};

	present_index = *index + 1;
	for (; format[present_index] != '\0'; present_index++)
	{
		for (flage_items = 0; chars_flag[flage_items] != '\0'; flage_items++)
			if (format[present_index] == chars_flag[flage_items])
			{
				nums_of_flags |= values_flag[flage_items];
				break;
			}
		if (chars_flag[flage_items] == 0)
			break;
	}
	*index = present_index - 1;
	return (nums_of_flags);
}
