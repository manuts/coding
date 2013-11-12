#include <stdio.h>
#include <string.h>
#include "gstack.h"
#include <stdlib.h>

void main()
{
    GStack s;
    stackNew(&s);
    printf("LSize = %d\tASize = %d\n", s.LSize, s.ASize);
    char more;
    int n = 0;
    char inBuffer[101];
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%s", inBuffer);
        stackPush(&s, strdup(inBuffer));
    }
    printf("%s\n", (char *)*((void **)(s.base) + 2));
}
