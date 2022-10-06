#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: function parameter
 * @max: func para
 * Return: NULL or pointer
 */

int *array_range(int min, int max)
{
	int *m, i;

	if (min > max)
		return (NULL);
	m = malloc((max - min + 1) * sizeof(*m));
	if (m == NULL)
		return (NULL);
	for (i = 0; min + i <= max; i++)
		m[i] = min + i;
	return (m);
}
