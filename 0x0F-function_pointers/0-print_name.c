#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: pointer of char type
 * @f: pointer to function that returns nothing, but prints a name
 * Return: Always successful
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
