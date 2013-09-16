/*
 * # gcc -o quickSort quickSort.c -std=c99 
 * # ./quickSort
 */

#include "stdio.h"
#include "stdlib.h"

void quickSort(int Array[], int lft, int rgt)
{
    // select standard
    int privot = Array[lft];
    int r = rgt;
    if(lft < rgt)
    { 
        while(lft < rgt) {
            while(lft < rgt && Array[rgt] >= privot)
                rgt--;
            if(lft < rgt) {
                Array[lft] = Array[rgt];
                lft++;
            }
            while(lft < rgt && Array[lft] < privot)
                lft++;
            if(lft < rgt) {
                Array[rgt] = Array[lft];
                rgt--;   
            }
        } 
        Array[lft] = privot;
        // 0-lft - 1
        quickSort(Array, 0, lft-1);
        // lft+ - n
        //quickSort(Array, lft+1, sizeof(Array)/sizeof(int)-1);  //error in result
        quickSort(Array, lft+1, r);
    }
}

int main()
{
    
    int arr[] = {49, 38, 65,97, 76, 13, 27, 50};
    for(int i = 0; i < sizeof(arr)/sizeof(int); ++i)
    {
        printf("arr[%d]=%d; ", i, arr[i]);
    }
    printf("\n");
    
    quickSort(arr, 0, sizeof(arr)/sizeof(int)-1);
    
    for(int j = 0; j < sizeof(arr)/sizeof(int); ++j)
    {
        printf("arr[%d]=%d; ", j, arr[j]);
    }
    printf("\n");
}
