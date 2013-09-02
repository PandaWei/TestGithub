#include <stdio.h>
#include <stdlib.h>

void fdecade()
{
    int i;
    int *p;
    for(i = 0; i < 10; i++) {
        p = malloc(sizeof(int));
        *p = 10;
        free(p);
    }
}

void fHundred()
{
    int i;
    int *p;
    for(i = 0; i < 100; i++) {
        p = malloc(sizeof(int));
        *p = 100;
        free(p);
    }
}

void fThousand()
{
    int i;
    int *p;
    for(i = 0; i < 1000; i++) {
        p = malloc(sizeof(int));
        *p = 1000;
        free(p);
    }
}

int main()
{
    int i;
    for(i = 0; i < 1000; i++) {
        fdecade();
        fHundred();
        fThousand();
    }
    return 0;
}
