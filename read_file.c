#include "monty.h"

/**
 * read_file - parses the monty file
 * @fp: pointer to file
 *
 * Return: void
 *
 */

void read_file(FILE *fp)
{

	/* unsigned int line_num = 1; */
	char *line = NULL;
	char *execute;
	char **words;
	ssize_t read_line;
	size_t length = 0;

	while ((read_line = getline(&line, &length, fp)) != -1)
	{
		execute = strtok(line, "\n");
		if (execute != NULL)
		{
		/*	printf("%s\n", execute); */
			words = ndsplitter(execute, " ");
			if (words != NULL)
			{
				printf("%c\n", *words[1]);
			}
		free_list(words);
		}

	}
	if (line)
		free(line);
}

