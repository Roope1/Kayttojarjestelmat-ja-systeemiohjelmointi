#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* For queue data structure*/
typedef struct string
{
    char *str;
    struct string *next;
} STRING;

int main(int argc, char *argv[])
{
    /* Declarign variables */
    char *input_filename;
    char *output_filename;

    /* Checking amount of arguments */
    if (argc == 1)
    {
        strcpy(input_filename, "stdin");
        strcpy(output_filename, "stdout");
    }
    else if (argc == 2)
    {
        strcpy(input_filename, argv[1]);
        strcpy(output_filename, "stdout");
    }
    else if (argc == 3)
    {
        /* Checking if input and output files are the same */
        if (strcmp(argv[1], argv[2] == 0))
        {
            fprintf(stderr, "Input and output file must differ\n");
            exit(1);
        }

        strcpy(input_filename, argv[1]);
        strcpy(output_filename, argv[2]);
    }
    else
    {
        fprintf(stderr, "usage: reverse <input> <output>\n");
        exit(1);
    }
}