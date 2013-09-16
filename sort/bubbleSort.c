#include "stdio.h"
#include "stdlib.h"

void bubbleSort(int Array[], int n)
{
    int temp;
    for(int i = 0; i < n-1; i++)  //choose (n-1) times
    {
        for(int j = 0; j < n-1-i ; j++)
        {
            if(Array[j] >= Array[j+1]) {
                temp = Array[j+1];     
                Array[j+1] = Array[j];
                Array[j] = temp;
            }
        }
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
    
    bubbleSort(arr, sizeof(arr)/sizeof(int));
    
    for(int j = 0; j < sizeof(arr)/sizeof(int); ++j)
    {
        printf("arr[%d]= %d;", j, arr[j]);
    }
    printf("\n");
}
