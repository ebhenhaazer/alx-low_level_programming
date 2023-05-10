#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory with malloc
 * @b: size to be allocated to unsigned int
 * Return: pointer to allocated memory or exit with 98
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
