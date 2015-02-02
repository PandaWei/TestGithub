#include <stdio.h>

#define SQUARE(a)((a)*(a))

int main()
{
    int a = 5;

    // output will not to be 25
    printf("square(5) = %d\n", SQUARE(a++));
    
    return 0;
}
