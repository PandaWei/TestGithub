/*
 *  16进制转10进制
 *
 * gcc -o trans_16_10 trans_16_10.c -lm
 */

#include <stdio.h>
#include <math.h>

long cov(int i,char a[])
{
    int j;
    long s=0;
    for(j=0; j<i; j++)
    {
        if(a[j]>='a'&& a[j]<='g') {
            a[j] -= 'a';
            a[j] += 10;
        }
        else if(a[j]>='A'&& a[j]<='G') {
            a[j] -= 'A';
            a[j] += 10;
        }
        else if(a[j]>='0'&&a[j]<='9')
            a[j] -= '0';
        else
            printf("invalid number.\n");
        s += a[j]*pow(16, i-1-j);
    }
    return s;
}

void main()
{
    char a[100],tmpc=0;//定义一个用来保存getchar函数返回值
    int i=0;
    
    printf("please input the number(16):\n");
    while((tmpc=getchar())!='\n')
    {
        a[i]=tmpc;
        i++;
    }
    
    printf("%lu\n",cov(i,a));
}
