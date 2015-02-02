#include <stdlib.h>

struct bit
{
    int a:3;
    int b:2;
    int c:3;
};

struct bit2
{
    int a:8;
    int b:2;
    int c:6;
};

int main()
{
    struct bit bi;
    printf("sizeof(bit)->%d\n", sizeof(bi));

    struct bit2 bi2;
    printf("sizeof(bit2)->%d\n", sizeof(bi2));

    char *p = (char*) &bi;
    *p = 0x99;

    printf("a->%d, b->%d, c->%d\n", bi.a, bi.b, bi.c);
    
    int a=-1;
    printf("%x", a);

    return 0;
}
