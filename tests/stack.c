#include <stdio.h>

void foo(int i, int j)
{
//    int x;
    printf("Address of the first param i is %p\n", &i);
    printf("Address of the second param j is %p\n", &j);
//    printf("Address of the variable x is %lu\n", (unsigned long)(&x));
}

void main()
{
//    int i;
//    int j;
//    printf("Address of i is %lu\n", (unsigned long)&i);
//    printf("Address of j is %lu\n", (unsigned long)&j);
    foo(4, 3);
}
