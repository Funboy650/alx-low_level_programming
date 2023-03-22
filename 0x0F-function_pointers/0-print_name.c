#include "function_pointers.h"

/**
 * print_name - a function to print name.
 * @name: name to print
 * @f: function that dosent return anything
 *
 * Rteurn: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
