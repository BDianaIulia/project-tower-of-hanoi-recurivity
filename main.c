#include <stdio.h>
#include <stdlib.h>

#include "hanoi_function.h"
#include "input.h"

int main()
{
    int no_of_stories = input();

    tower_of_hanoi( no_of_stories, "silver plate" , "bronze plate" , "golden plate" );

    return 0;
}

