#include <stdio.h>
#include <stdlib.h>

#include "print.h"


void tower_of_hanoi( int no_of_stories, char silver_plate[], char bronze_plate[], char golden_plate[] )
{
    if( no_of_stories == 1 )
    {
        print_function( no_of_stories, silver_plate, golden_plate );
        return;
    }

    tower_of_hanoi( no_of_stories - 1 , silver_plate , golden_plate , bronze_plate );

    print_function( no_of_stories, silver_plate, golden_plate );
    tower_of_hanoi( no_of_stories - 1 , bronze_plate , silver_plate , golden_plate );
}
