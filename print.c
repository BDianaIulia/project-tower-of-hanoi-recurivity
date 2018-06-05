
/**
* @file print.c
* @brief C library implementation to display the moves.
* @author Diana Bleoanca
* @date 06/05/18.
*/


#include <stdio.h>
#include <stdlib.h>

/**
* \fn void print_function( int no_of_level, char from_plate[], char to_plate[] )
* @brief Display the moves.
* @param no_of_level - the number of the story
* @param from_plate - string that keeps the name of this plate
* @param to_plate - string that keeps the name of this plate
*/

void print_function( int no_of_level, char from_plate[], char to_plate[] )
{

    printf( "\nThe floor %d will be move from %s to %s " , no_of_level, from_plate , to_plate );
}
