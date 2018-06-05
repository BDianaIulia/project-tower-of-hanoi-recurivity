///\file main.c
///\brief recursive implementation for tower of Hanoi.
///
/// Created by Diana Bleoanca.

#include <stdio.h>
#include <stdlib.h>

#include "hanoi_function.h" // for tower_of_hanoi()
#include "input.h" // for input()

int main()
{
    ///\fn int main()
    ///\brief Main function.
    /// Function calls of input from "basic.h"
    ///and tower_of_hanoi from "hanoi_function.h".
    int no_of_stories = input(); // total number of stories

    tower_of_hanoi( no_of_stories, "silver plate" , "bronze plate" , "golden plate" );

    return 0;
}

