#include <stdio.h>

int inc(int a)
{
    return (++a);    
}

int multi(int* a, int* b, int* c)
{
    return (*c=*a**b);
}

typedef int(*FUNC1) (int in);
typedef int(*FUNC2) (int*, int*, int*);

void show(FUNC2 fun, int arg1, int *arg2)
{
    // arg1=10
    
    FUNC1 p = &inc;
    
    int tmp = p(arg1); // tmp = inc(a=10)= 11 

    fun(&tmp, &arg1, arg2); // multi(a=11, arg1=&10, arg2= &a)
                            // 110 =11 * 10;

    printf("%d\n", *arg2);
}

int main()
{
    int a;

    show(multi, 10, &a);

    return 0;
}
