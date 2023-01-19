#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Function to print a name.
 * @name: Name.
 * @f: function pointer.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
