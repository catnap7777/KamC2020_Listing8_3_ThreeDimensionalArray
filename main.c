

// from Listing 8.2 2 Dimensional Array; p.180

#include <stdio.h>
#include <stdlib.h>

//declare 1000 element array
//think of working the array from right to left...
//so for int array [2][3][4], this would go from 4 to 3 to 2
//... data element 1 would be at [0][0][0] and would continue as follows:
// [0[0][0] <-- starts here
// [0[0][1]
// [0[0][2]
// [0[0][3]
// [0[0][4]
//    ...
// [0[0][9] <-- 10th element is stored here n-1 where n is the number
//             defined in the array --> int random_array[10][10][10]
// [0[0][0]
//

int random_array[10][10][10];
int a,b,c;

int main(void)
{
    //fill the array with random numbers.  The C library
    //function rand() returns a random number.  Use one
    //for loop for each array subscript

    for(a=0; a<10; a++)
    {
        for(b=0; b<10; b++)
        {
            for(c=0; c<10; c++)
            {
                random_array[a][b][c]=rand();
            }
        }
    }
    // now display the array elements 10 at a time
    for(a=0; a<10; a++)
    {
        for(b=0; b<10; b++)
        {
            for(c=0; c<10; c++)
            {
                printf("\nrandom_array[%d][%d][%d] = ",a,b,c);
                printf("%d",random_array[a][b][c]);
            }
            printf("\nPress 'Enter' to continue, CTRL-C to quit.");
            getchar();
        }
    }
    return 0;

}
