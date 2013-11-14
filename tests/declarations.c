#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ***p;
    printf("&p\t=\t%p\n", &p);
    p = malloc(sizeof(int **));
    printf("p\t=\t%p\n", p);
    *p = malloc(sizeof(int *));
    printf("*p\t=\t%p\n", *p);
    **p = malloc(sizeof(int));
    printf("**p\t=\t%p\n", **p);
    ***p = 5;
    printf("***p\t=\t%d\n", ***p);
}
