#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <glob.h>


void test_glob(int argc, char** argv)
{
    glob_t glo;
    int i, j;
    for(i=0; i < argc; i++)
    {
        glo.gl_offs=0;
        glob(argv[i], GLOB_TILDE, 0, &glo);
        for(j=0; j < glo.gl_pathc; j++)
        {
            printf("serarch[%d]:%s\n", j, glo.gl_pathv[j]);
        }
        globfree(&glo);
    }
}

int main(int argc, char** argv)
{
    if(argc<2)
    {
        printf("enter file name\n");
    }
    
    test_glob(argc, argv);
    
    return 0;
}
