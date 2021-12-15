#include "monty.h"

int main(int argc, char **argv)
{
	FILE *fp;

	fp = monty_init(argc, argv[1]);

	read_file(fp);

	monty_exit(fp);

	return (EXIT_SUCCESS);
}
