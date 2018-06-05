///\file hanoi_function.c
///\brief C library implementation for recursive algorithm for tower of Hanoi
///
/// Created by Diana Bleoanca.
/// Implements the main function.
#include <stdio.h>
#include <stdlib.h>

#include "print.h" // for print_function()


void tower_of_hanoi( int no_of_stories, char silver_plate[], char bronze_plate[], char golden_plate[] )
{
    ///\fn void tower_of_hanoi( int no_of_stories, char silver_plate[], char bronze_plate[], char golden_plate[] )
    ///\param no_of_stories - the number of stories , data input
    ///\param silver_plate - string that keeps the name of this plate
    ///\param bronze_plate - string that keeps the name of this plate
    ///\param golden_plate - string that keeps the name of this plate
    ///\brief Implement the recursive algorithm.
    ///
    ///If the number of stories (the data input) is equal with 1, then we have only one move to do.
    ///This is the condition to return from recursivity.
    ///First, we implement the solution for the stories, besides the largest
    ///supposing that we need to push them on the auxiliary plate( bronze ).
    ///The largest story will be moved from silver to golden plate.
    ///After that, we will move, in recursive way, those plates from bronze plate to destination plate.
    if( no_of_stories == 1 )
    {
        print_function( no_of_stories, silver_plate, golden_plate );
        return;
    }

    tower_of_hanoi( no_of_stories - 1 , silver_plate , golden_plate , bronze_plate );

    print_function( no_of_stories, silver_plate, golden_plate );
    tower_of_hanoi( no_of_stories - 1 , bronze_plate , silver_plate , golden_plate );
}
