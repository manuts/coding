#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "stack.h"

void stackNew(stack *s)
{
    s->LSize = 0;
    s->base = (int *)malloc(4*sizeof(int));
    assert( s->base != NULL);
    s->ASize = 4;
}

void stackDispose(stack *s)
{
    free(s->base);
}

void stackPush(stack *s, int a)
{
    // If stack if full
    if (s->LSize == s->ASize)
    {
        s->base = realloc(s->base, s->ASize*2*sizeof(int));
        assert( s->base != NULL );
        s->ASize *= 2;
    }
    *(s->base + (s->LSize)++) = a;
}

int stackPop(stack *s)
{
    // If stack is empty abort.
    if (s->LSize == 0)
    {
        fputs("Error : Stack Empty, Can't pop\n", stderr);
        abort();
    }
    return *(s->base + --(s->LSize));
}
