#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* src = "Hello, world";
    char* dst = NULL;

    int len = strlen(src);
    dst = (char*) malloc(len+1);

    char* d = dst;
    char* s = &src[len-1];
    
    while(len-- != 0) {
        *d++ = *s--;    
    }

    printf("%s\n", dst);

    // notice !
    *d = '\0';
    free(dst);
    dst = NULL;

    return 0;
}
