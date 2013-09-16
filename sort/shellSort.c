#include "stdio.h"
#include "stdlib.h"

void shellSort(int work[], int n)
{
    int i, j, x, d;
    d = n/2;
    while(d >= 1)
    {
        for(i = d ; i < n; i++)
        {
            x = work[i];
            j = i-d;
            while((j >= 0) && (x < work[j]))
            {
                work[j+d] = work[j]; //相当与work[i] =work[j]
                j-=d;
            }
            work[j+d] = x;
        }
        d /= 2;
    }
}

int main()
{
    
    int arr[] = {49, 38, 65,97, 76, 13, 27, 50};
    for(int i = 0; i < sizeof(arr)/sizeof(int); ++i)
    {
        printf("arr[%d]= %d;", i, arr[i]);
    }
    printf("\n");
    
    shellSort(arr, sizeof(arr)/sizeof(int));
    
    for(int j = 0; j < sizeof(arr)/sizeof(int); ++j)
    {
        printf("arr[%d]= %d;", j, arr[j]);
    }
    printf("\n");
}
