#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *a = malloc(100*sizeof(int));
    *(a - 1) = 0;
    *(a - 2) = 0;
    free(a) ;
}
