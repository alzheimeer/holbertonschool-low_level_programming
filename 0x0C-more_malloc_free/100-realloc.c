#include <stdlib.h>
#include "holberton.h"
/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer previously allocated.
 * @old_size: size of ptr
 * @new_size: new size
 * Return: ptr or NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
