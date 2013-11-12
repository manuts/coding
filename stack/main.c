#include <stdio.h>
#include "stack.h"

void main()
{
    stack s;
    stackNew(&s);
    printf("LSize = %d\tASize = %d\n", s.LSize, s.ASize);
    int i;
    for( i = 0; i < 9; i++ )
    {
        stackPush(&s, i*i);
    }
    printf("LSize = %d\tASize = %d\n", s.LSize, s.ASize);
    for( i = 0; i < 7; i++ )
    {
        printf("Pop returns %d\n", stackPop(&s));
    }
    printf("LSize = %d\tASize = %d\n", s.LSize, s.ASize);
    stackDispose(&s);
}
