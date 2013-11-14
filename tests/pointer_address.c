#include <stdio.h>

int main ()
{
    int a[4];
    int i;
    for( i = 0; i < 4; i++ )
    {
        printf("Address of a[%d] is %p\n", i, &a[i]);
    }
    printf("The value of a is %p\n", a);
    printf("The address of a ie, &a is %p\n", &a);
    printf("The address of i is %p\n", &i);
    return 0;
}
