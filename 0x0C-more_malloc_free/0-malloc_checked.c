#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memoty using malloc
 * @b: function int parameter
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
