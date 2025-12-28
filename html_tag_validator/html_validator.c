#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct      s_node {
    char            *tag;
    struct s_node   *next;
}                   t_node;

int is_self_closing(const char *tag)
{
    return ;
}

void push(t_node **stack, char *tag)
{
    t_node *new;
    new = malloc(sizeof(t_node));
    if (!new)
        return NULL;
    new->tag = tag;
    new->next = *stack;
    *stack = new;
}

char *pop(t_node **stack)
{
    if (!stack)
        return NULL;
    t_node *top;
    char *tag; // top node's tag

    top = *stack; // move the stack's head down one eleemnt
    tag = top->tag;
    *stack = top->next;
    free(top);
    return tag;
}
char *extract_tag()
{

}

int html_validator(char *str)
{

}

int main(int argc, char **argv)
{
    int i = 1;

    if (argc == 1)
    {
        write(1, "\n", 1);
        return 0;
    }
    while (i < argc)
    {
        if (html_validator(argv[i]) == 0)
        {
            write(1, "OK", 2);
            write(1, "\n", 1);
        }
        else
        {
            write(1, "Error", 5);
            write(1, "\n", 1);
        }
        i++;
    }
    return 0;
}
