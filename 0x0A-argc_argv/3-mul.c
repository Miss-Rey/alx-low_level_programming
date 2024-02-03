#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints product of two numbers passed to cocommand line
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 *
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int prod = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", prod);
	}

	return (0);
}
