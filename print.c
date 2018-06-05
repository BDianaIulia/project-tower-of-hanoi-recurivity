///\file print.h
///\brief C library implementation to display the moves.
///
/// Created by Diana Bleoanca.
/// Display the moves from one plate to the other plate.

#include <stdio.h>
#include <stdlib.h>

void print_function( int no_of_level, char from_plate[], char to_plate[] )
{
    ///\fn void print_function( int no_of_level, char from_plate[], char to_plate[] )
    ///\brief Display the moves.
    ///\param no_of_level - the number of the story
    ///\param from_plate - string that keeps the name of this plate
    ///\param to_plate - string that keeps the name of this plate
    ///
    printf( "\nThe floor %d will be move from %s to %s " , no_of_level, from_plate , to_plate );
}
