#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* For queue data structure*/
typedef struct queueNode
{
    char *str;
    struct queueNode *next;
} NODE;

NODE *enqueue(NODE *head, char *str);
NODE *dequeue(NODE *head);

int main(int argc, char *argv[])
{
    /* Declaring variables */
    FILE *input_stream;
    FILE *output_stream;

    NODE *queue = NULL;

    /* Checking amount of arguments and creating stream handles */
    if (argc == 1)
    {
        input_stream = stdin;
        output_stream = stdout;
    }

    else if (argc == 2)
    {
        if ((input_stream = fopen(argv[1], "r")) == NULL)
        {
            fprintf(stderr, "error: cannot open file '%s'", argv[1]);
            exit(1);
        }
        output_stream = stdout;
    }

    else if (argc == 3)
    {
        /* Checking if input and output files are the same */
        if (strcmp(argv[1], argv[2]) == 0)
        {
            fprintf(stderr, "Input and output file must differ\n");
            exit(1);
        }

        if ((input_stream = fopen(argv[1], "r")) == NULL)
        {
            fprintf(stderr, "error: cannot open file '%s'", argv[1]);
            exit(1);
        }

        if ((output_stream = fopen(argv[2], "w")) == NULL)
        {
            fprintf(stderr, "error: cannot open file '%s'", argv[2]);
            exit(1);
        }
    }

    else /* Unknown amount of arguments*/
    {
        fprintf(stderr, "usage: reverse <input> <output>\n");
        exit(1);
    }

    /* Ending procedures */
    fclose(input_stream);
    fclose(output_stream);

    // TODO: free memory and such

    exit(0);
}

/* Adds a NODE to queue and returns the new first element in LL*/
NODE *enqueue(NODE *head, char *str)
{

    NODE *newnode;
    if ((newnode = (NODE *)malloc(sizeof(NODE))) == NULL)
    {
        fprintf(stderr, "malloc failed");
        exit(1);
    }

    newnode->str = str;
    newnode->next = head;
    head = newnode;
    return head;
}

NODE *dequeue(NODE *head)
{
}
