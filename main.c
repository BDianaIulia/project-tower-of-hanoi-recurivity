/**
* @file main.c
* @brief C library recursive implementation for tower of Hanoi.
* @author Diana Bleoanca
* @date 06/05/18.
*/


#include <stdio.h>
#include <stdlib.h>

#include "hanoi_function.h" /// for tower_of_hanoi()
#include "input.h" /// for input()

/**
* \fn int main()
* @brief Main function.
* Function calls of input from "basic.h" and tower_of_hanoi from "hanoi_function.h".
*/
int main()
{
 
    int no_of_stories = input(); /// total number of stories

	/// Call the function tower_of_hanoi
    tower_of_hanoi( no_of_stories, "silver plate" , "bronze plate" , "golden plate" );

    return 0;
}

