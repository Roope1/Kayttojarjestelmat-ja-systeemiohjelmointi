#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc > 2)
    {
        fprintf(stderr, "Usage: %s [batch_file]\n", argv[0]);
        exit(1);
    }

    char *buffer;
    size_t buffer_size = 32;

    /* Allocate memory for buffer */
    buffer = (char *)malloc(buffer_size * sizeof(char));
    if (buffer == NULL)
    {
        fprintf(stderr, "Unable to allocate memory for buffer\n");
        exit(1);
    }

    /* Main loop */
    while (1)
    {
        fprintf(stdout, "wish > ");

        /* Get user input */
        getline(&buffer, &buffer_size, stdin);

        /* remove newline from end*/
        buffer[strlen(buffer) - 1] = '\0';

        /* Exit command */
        if (strcmp(buffer, "exit") == 0)
        {
            free(buffer);
            exit(0);
        }
        else if (strcmp(buffer, "cd") == 0)
        {
        }
        else if (strcmp(buffer, "path") == 0)
        {
        }
        else
        {
            fprintf(stdout, "'%s' is not recognized as a command.\n", buffer);
        }
    }
}