#include "monty.h"

/**
 * main - monty interpreter using monty files
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0, on success
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	/* accept only two arguments */
	if (argc != 2)
	{
		dprintf(STDOUT_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	exit(EXIT_SUCCESS);
}
