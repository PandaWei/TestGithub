#include <stdio.h>
#include <stdlib.h>


#define P (1024*1024) //overflow.c:11: warning: integer overflow in expression

#define Q (1024*1024l)

multi_P()
{
    long long i = P * P; //常数与常数运算，结果的类型与接收结果的变量（类型）无关！只与后缀有关。
    printf("p = %d;", P);
    printf("P * P = %lld\n", i);
}
multi_Q()
{
    long long i = Q * Q;
    printf("Q = %d;", Q);
    printf("Q * Q = %lld\n", i);
}
multi()
{
    long long i = 1024 * 1024;
    i = i * P;
    printf("P = %d;i = %ld; P * i = %lld\n", P, 1024*1024, i); //常量与变量运算，结果的类型与变量的类型一致
}

int main()
{
    multi_P();
    multi_Q();
    multi();
}

