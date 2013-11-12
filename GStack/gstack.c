#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "gstack.h"

void stackNew(GStack *s)
{
    s->LSize = 0;
    s->base = (void **)malloc(4*sizeof(void *));
    assert (s->base != NULL);
    s->ASize = 4;
}

void stackDispose(GStack *s)
{
    int i;
    for (i = 0; i < s->LSize; i++)
    {
        free(s->base+i);
    }
    free(s->base);
}

void stackPush(GStack *s, void* BAddress)
{
    if(s->LSize == s->ASize)
    {
        s->base = (void **)realloc(s->base, s->ASize*2*sizeof(void *));
        assert (s->base != NULL);
        s->ASize *= 2;
    }
    *(void **)(s->base + (s->LSize)++) = BAddress;
}

void* stackPop(GStack *s)
{
    if (s->LSize == 0)
    {
        fputs("Error : Stack Empty, Can't pop\n", stderr);
        abort();
    }
    return *(void **)(s->base + --(s->LSize));
}
