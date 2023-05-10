#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: array pointing to arguments
 * Return: 1, if its a number, else 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
