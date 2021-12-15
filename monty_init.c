#include "monty.h"

/**
 * monty_init - Checks and sets up the interpreter for handling the file
 * @fp: File pointer to the monty file
 * Return: file pointer
 */

FILE *monty_init(int argc, char *file)
{
	FILE *fp;

	if (argc != 2)
	{

		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(file, "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}

	return (fp);
}
