#include "stdio.h"
#include "stdlib.h"

void selectSort(int Array[], int n)
{
    int min;
    for(int i = 0; i < n-1; i++)  //n-1趟选择
    {
        min = Array[i];
        //查找最小值
        for(int j = i+1; j <= n-1; j++)
        {
            if(Array[j] < min) {
                Array[i] = Array[j];
                Array[j] = min;
                min = Array[i];
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
    
    selectSort(arr, sizeof(arr)/sizeof(int));
    
    for(int j = 0; j < sizeof(arr)/sizeof(int); ++j)
    {
        printf("arr[%d]= %d;", j, arr[j]);
    }
    printf("\n");
}
