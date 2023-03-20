#include "main.h"

/**
 *binary_to_uint - takes binary and makes in an integer
 *@b: is a letter and is siblings to a
 *Return: peepeepoopoo
 */

unsigned int binary_to_uint(const char *b)
{
	int dec_value;
	int length;

	while (length <= b)
		length++;

	while (length >= 1)
	{
		if (b[length] == '1')
			dec_value = (1 * (2 * length));
			length--;
		if (b[length] == '0')
			length--;
	}
	return (dec_value);
}
