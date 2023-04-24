#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // intro to arrays
    // made three arrays
    // repeated the process from the first score
    int score[3];
    score[0] = 72;
    score[1] = 73;
    score[2] = 33;

    // changes include startign score bracket at 0 instead off 1 in the previous example
    printf("Avg: %f\n",(score[0] + score[1] + score[2]) / (float) 3);








}