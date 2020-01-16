#include <stdio.h>
/**
 *binary_search - search  an array of integers
 *@array:pointer to the first element of the array to search in
 *@size:number element in array
 *@value:is value for search
 *Return: return the first index where value is located or -1 if is none
 *if array is NULL return -1
 *Every time you compare a value in the array to the value you are searching
 *you have to print this value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t m, h = size-1, l = 0, i;

	if (!array)
		return (-1);
	while (h >= l)
	{
	    m = l + ((h - l) / 2);
	    printf("Searching in array: ");
	    for (i = l; i <= h; i++)
	    {
	    	printf("%lu", i);
		if (i != h)
			printf(", ");
	    }
	    printf("\n");

	    if (array[m] < value)
		l = m + 1;
	    else if (array[m] > value)
		h = m - 1;
	    else
		return (m);
	}
	return (-1);
}
