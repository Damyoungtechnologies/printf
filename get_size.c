#include "main.h"

/**
 * get_size - size is needed to cast the argument
 * @format: Formatted string ine arguments
 * @i: List of arguments. is need to getsa
 * Return: Precision. for more accuracy 
 */
int get_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	if (format[curr_i] == 'l')
		size = S_LONG;
	else if (format[curr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (size);
}
