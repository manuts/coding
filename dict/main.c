#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char **merge(char **A, char **B, int len)
{
    int mid = len/2;
    int i = 0, j = 0, k = 0;
    char **C = malloc(len*sizeof(char *));
    for(; k < len; k++)
    {
        if(i == mid)
        {
            memcpy(C + k, B + j, (len - mid - j)*sizeof(char *));
            return C;
        }
        if(j == len - mid)
        {
            memcpy(C + k, A + i, (mid - i)*sizeof(char *));
        }
        if (strcmp(A[i], B[j]) < 0)
            C[k] = A[i++];
        else
            C[k] = B[j++];
    }
    return C;
}

char **mergeSort(char **base, int len)
{
    if (len <= 1)
        return base;
    int mid = len/2;
    char **A = mergeSort(base, mid);
    char **B = mergeSort(base + mid, len - mid);
    return merge(A, B, len);
}

void main()
{
    /* Number of words in the dicationary */
    int Length;

    /* Iterators */
    int Itr1;

    /* Storage to hold the word temporarily */
    char temp[101];

    /* Requesting the number of words to be put in */
    printf("Enter the number of words to be put in :");
    scanf("%d", &Length);

    /* Array of pointers to the words in the dictionary */
    char *Dict[Length];

    
    printf("Enter the words to be put in :\n");
    for(Itr1 = 0; Itr1 < Length; Itr1++)
    {
        scanf("%s", temp);
        Dict[Itr1] = strdup(temp);
    }

    printf("The words put in are :\n");
    for(Itr1 = 0; Itr1 < Length; Itr1++)
    {
        printf("%s\n", Dict[Itr1]);
    }

    char **Sorted = mergeSort(Dict, Length);
    for(Itr1 = 0; Itr1 < Length; Itr1++)
    {
        printf("%s\n", Sorted[Itr1]);
    }
}
