#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - if n < 2nd, 2nd = n fn to concatnate strings with n bytes
 * 2nd + 1st = total len, malloc + null byte, loop to insert into temp arr
 * @s1: input one destination for concatnation
 * @s2: input two source of string
 * @n: s2's number of bytes; int type for size of byte
 * Return: pointer to new space in memory or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k, e;
	int coun1 = 0;
	char *q;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		coun1 = coun1 + 1;
	}

	q = malloc(sizeof(*q) * (coun1 + n + 1));
	if (q == NULL)
	{
		return (NULL);
	}
	for (k = 0; s1[k] != '\0'; k++)
	{
		q[k] = s1[k];
	}
	for (e = 0; s2[e] != '\0' && e < n; e++, k++)
	{
		q[k] = s2[e];
	}
	q[k] = '\0';
	return (q);
}
