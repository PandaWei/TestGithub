#include <stdio.h>

#define swap0(x,y) (x=(x)+(y), y=(x)-(y), x=(x)-(y))
#define swap1(x,y) x=(x)+(y); y=(x)-(y); x=(x)-(y)
#define swap2(x,y) \
x=(x)+(y); \
y=(x)-(y); \
x=(x)-(y)


// report error while compiling
swap3( int* p1,int* p2 )
{
    int *p;
    *p = *p1;
    *p1 = *p2;
    *p2 = *p;
}

swap4(int* p1, int* p2)
{
    int a;
    a = *p1;
    *p1 = *p2;
    *p2 = a;
}

int main()
{
    int x=3;
    int y=2;

    
    printf("x->%d,y->%d\n", x, y);
    
    //swap0(x,y);
    //swap3(&x,&y);
    swap4(&x,&y);
    
    printf("x->%d,y->%d\n", x, y);

    return 0;
}
