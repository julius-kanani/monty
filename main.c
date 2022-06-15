#include "monty.h"

/**
 * main - run a stack implementation.
 * @argc: argument count
 * @argv: array of argument strings.
 * Return: EXIT_SUCCESS on success or EXIT_FAILURE on failure
 */
int main(int argc, char **argv)
{
        FILE *monty_file = NULL;        /* points to monty file */
        char ch;

        /* ony two number of args required */
        if (argc != 2)
        {
                dprintf(1, "USAGE: monty file\n");
                exit(EXIT_FAILURE);
        }

        /* open the file given as the second args, and read it */
        monty_file = fopen(argv[1], "r");

        /* unable to open the monty file */
        if (monty_file == NULL)
        {
                dprintf(1, "Error: Can't open file %s\n", argv[1]);
                exit(EXIT_FAILURE);
        }
        else    /* read the monty file */
        {
                while ((ch =fgetc(monty_file)) != EOF)
                        printf("%c", ch);
                fclose(monty_file);
        }
        
        exit(EXIT_SUCCESS);
}
