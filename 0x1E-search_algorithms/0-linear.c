#include "search_algos.h"
/**
 * linear_search - linear search function
 * @array: array to search on
 * @size: size of array
 * @value: value to search on array
 * Return: index of found value or -1 on fail
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
