#include "monty.h"


/**
 * monty_exit - exits the monty interpeter
 * @fp: file pointer
 * return: Void
 */

void monty_exit(FILE *fp)
{
	fclose(fp);
	/*free stack when it exist */
	exit(EXIT_SUCCESS);

}
