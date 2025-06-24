/*
Assignment name  : brackets
Expected files   : *.c *.h
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes an undefined number of strings in arguments. 
For each argument, the program prints on the standard output "OK" followed by a newline if the expression is correctly bracketed, otherwise it prints "Error" followed by a newline.

Symbols considered as 'brackets' are brackets '(' and ')', square brackets '[' and ']'and braces '{' and '}'. Every other symbols are simply ignored.

1. An opening bracket must always be closed by the good closing bracket in the correct order. 
2. A string which not contains any bracket is considered as a correctly bracketed string.
3. If there is no arguments, the program must print only a newline.

Examples :

`$> ./brackets '(johndoe)' | cat -e`

`OK$`

`$> ./brackets '([)]' | cat -e`

`Error$`

`$> ./brackets '' '{[(0 + 0)(1 + 1)](3*(-1)){()}}' | cat -e`

`OK$`

`OK$`

`$> ./brackets | cat -e`

`$`

`$>`

*/

#include <unistd.h>


static int is_open(char c)
{
    return (c == '(' || c == '{' || c == '[');
}

static int is_close(char c)
{
    return (c == ')' || c == '}' || c == ']');
}


static char match(char c)
{
    if (c == ')')
        return '(';
    if (c == '}')
        return '{';
    if (c == ']')
        return '[';
    return 0;
}

static int no_brackets(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (is_open(str[i]) || is_close(str[i])) // if bracket found
            return 1; // OK
        i++;
    }
    return 0; // ERROR
}


static int matching_brackets(char *str)
{
    int top = -1; // top f the stack index
    int i = 0;
    char *stack_ptr = str; // reuse string buffer as stack

    while (str[i])
    {
        if (is_open(str[i]))
        {
            stack_ptr[++top] = str[i]; // push
        }
        else if (is_close(str[i]))
        {
            if (top < 0 || stack_ptr[top] != match(str[i]))
                return 1; // error
            top--; // pop
        }
        i++;
    }
    if (top == -1)
        return 0;
    else
        return 1;
}

int correctly_bracketed(char *str)
{
    if (no_brackets(str) == 0)
        return 0; // OK
    else if (matching_brackets(str) == 0)
        return 0; // OK
    else
        return 1; //ERROR
}

int main(int argc, char *argv[]) {
    int i = 1;

    if (argc == 1)
    {
        write(1, "\n", 1);
        return 0;
    }
    while (i < argc)
    {
        if (correctly_bracketed(argv[i]) == 0)
        {
            write(1, "OK", 2);
            write(1, "\n", 1);
        }
        else
        {
            write(1, "ERROR", 5);
            write(1, "\n", 1);
        }
        i++;
    }
    return 0;
}
