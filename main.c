#include <stdio.h>
#include <stdlib.h>

#include "hanoifunc.h"

int main()
{
    int no_of_stories;

    printf( "Enter the number of the disks: \n" );
    scanf( "%d" , &no_of_stories );

    towerOfHanoi( no_of_stories , "silver plate" , "bronze plate" , "golden plate" );
    return 0;
}

