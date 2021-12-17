#include "monty.h"

early_free_struct efs;

int main(int argc, char **argv)
{
	stack_t *head = NULL;

	monty_init(argc, argv[1]);

	read_file(&head);

	monty_exit(&head);

	return (EXIT_SUCCESS);
}
