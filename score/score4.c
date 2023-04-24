#include <cs50.h>
#include <stdio.h>

int main(void)
{

// using a FOR LOOP so we dont repeat code

    int score[3];
    for (int i = 0; i < 3; i++)
    {
        // intro to pull the I for the for loop into our array
        // the loop for the array must include I or whatever the INT is declared to be
        score[i] = get_int("Enter Score: ");
    }



    printf("Avg: %f\n",(score[0] + score[1] + score[2]) / (float) 3);








}