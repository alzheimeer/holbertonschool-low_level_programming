#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number element in array
 * @value: is value for search
 * Return: return the first index where value is located or -1 if is none
 * if array is NULL return -1
 * Every time you compare a value in the array to the value you are searching
 * you have to print this value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
