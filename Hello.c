/*
 * Please refer http://www.mpich.org
 */

#include <stdio.h>
#include "mpi.h"

main(int argc,char *argv[] )
{
    MPI_Init( &argc, &argv );
    printf( "Hello, world!\n" );
    MPI_Finalize();
}

