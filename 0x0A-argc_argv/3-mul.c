#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * atoi is a function that converts a string into an int
 * program to multiply two numbers
 * @argc: size of argv array and number of command line arguments
 * @argv: An array of size argc pointing to arguments
 * Return: result of multiplication or 1
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
/* atoi convert a string to an int */
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
