#include<stdio.h>

void foo(int i, int j)
{
    printf("%p\n",&i);
    printf("%p\n",&j);
}

int main()
{
    foo(2,3);
    return 0;
}
