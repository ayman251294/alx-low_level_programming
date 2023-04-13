#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocate memory with malloc
 * @b: number of bytes to allocate
 *
 * Return: return pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
