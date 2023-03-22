#include "function_pointers.h"

/**
 * array_iterator - executes a given function as a
 * parameter on each element of an array.
 * @array: array to iterate.
 * @size: array size
 * @action: pointer to the function.
 *
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
