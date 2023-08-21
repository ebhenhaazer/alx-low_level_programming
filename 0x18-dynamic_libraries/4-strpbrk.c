#include "main.h"
/**
 * *_strpbrk - find first appearance of a char in an array
 *
 * @s: pointer array to be searched
 * @accept: pointer array with char to be searched
 * Return:  pointer to array
 */

char *_strpbrk(char *s, char *accept)
{
	for (; *s; s++)
	{
		if (_strchr(accept, *s) != 0)
			return ((char *) s);
	}
	return (0);
}
