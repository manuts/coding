#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *merge(int *A, int *B, int len)
{
    int mid = len/2;
    int i = 0, j = 0, k = 0;
    int *c = malloc(len*sizeof(int));
    for(; k < len; k++)
    {
        if(i == mid)
        {
            memcpy(c + k, B + j, (len - mid - j)*sizeof(int));
            return c;
        }
        if(j == len - mid)
        {
            memcpy(c + k, A + i, (mid - i)*sizeof(int));
            return c;
        }
        if (A[i] < B[j])
            c[k] = A[i++];
        else
            c[k] = B[j++];
    }
}

int *mergeSort(int *base, int len)
{
    if (len <= 1)
        return base;
    int mid = len/2;
    int *A = mergeSort(base, mid);
    int *B = mergeSort(base + mid, len - mid);
    return merge(A, B, len);
}

void main ()
{
    /* The number of integers to be taken in */
    int Length;

    printf("Enter the number of integers to be accepted :");
    scanf("%d", &Length);

    /* The array of integers to be sorted */
    int arr[Length];

    /* Iterators */
    int Itr1;

    printf("Enter the numbers one by one :");
    for (Itr1 = 0; Itr1 < Length; Itr1++)
    {
        scanf("%d", arr + Itr1);
    }

    printf ("The numbers entered are :");
    for (Itr1 = 0; Itr1 < Length - 1; Itr1++)
        printf("%d, ", arr[Itr1]);
    printf("%d\n", arr[Itr1]);
    int *Sorted = mergeSort(arr, Length);
    printf ("The numbers entered are :");
    for (Itr1 = 0; Itr1 < Length - 1; Itr1++)
        printf("%d, ", Sorted[Itr1]);
    printf("%d\n", Sorted[Itr1]);
}
