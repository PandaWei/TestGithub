#include <stdio.h>


int find_dup(int a[], int s)
{
    int sum = 0;
    int sum2;
    int i;
    
    for(i=0; i<s; ++i)
    {
        sum+=a[i];
    }
    sum2 = (1+s)*s/2;

    printf("sum->%d,sum2->%d\n", sum, sum2);

    return (s - abs(sum2 - sum));
}

int main()
{
    int size = 5;
    int arr[5];
    int i;

    for(i=0; i<4; i++) {
        arr[i]= i+1;
        printf("arr[%d]=%d\n", i, arr[i]);
    }
    //set duplicate is 1
    arr[4] = 1;
    for(i=0; i<4; i++) {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
    
    int result = find_dup(arr, size);   

    printf("duplicate number is %d\n", result);

    return 0;
}
