/*
Assignment name  : html_anglebrackets
Expected files   : *.c *.h
Allowed functions: strncpy, write, malloc, free, strcmp
--------------------------------------------------------------------------------

Write a program that takes an undefined number of strings in arguments. For each
argument, the program prints on the standard output "OK" followed by a newline
if the expression is correctly closed, otherwise it prints "Error" followed by
a newline.

<html> is an open
</html> is closed
<img> is ignored

An open must always be closed by the corresponding close in the
correct order. A string which not contains any angle brackets is considered as a
correct string. the string between the angle brackets can be anything not just html

If there is no arguments, the program must print only a newline.

Examples :

`$> ./html_brackets '<html><bla><body></body><newbody></newbody></bla></html>' | cat -e`

`$ OK`

`$> ./html_brackets '<bla gvngf></html><bla></html>' | cat -e`

`$ Error`

`$> ./html_brackets '' '<html><bla></html><html></bla></html>' | cat -e`

`$ OK`

`$ Error`

`$> ./html_brackets | cat -e`

`$`

`$> ./html_brackets '<html><img></html><img><html><img></html>' | cat -e`

`$ OK`


stack until closing is found, compare with last open, (either delete when linked list or --)

<head><html> = 1;

<div><a><html><div><body><head><head><html></html></head></head></span></body></div></html></a></div> = 1;

<custom-element attribute="value"></custom-element> = 0;

<hello attribute="haha!"></hello> = 0;


*/

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_node {
    char *tag;
    struct s_node *netx;
}           t_node;


int is_self_closing(const char *tag)
{


}

void push()
{

}

char *pop()
{

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
            write(1, "KO", 2);
            write(1, "\n", 1);
        }
        i++;
    }
    return 0;
}