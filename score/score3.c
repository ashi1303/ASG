#include <cs50.h>
#include <stdio.h>

int main(void)
{
// below we ask for the scores from the user using the GET_INT
    int score[3];
    score[0] = get_int("Score 1: ");
    score[1] = get_int("Score 2: ");
    score[2] = get_int("Score 3: ");


    printf("Avg: %f\n",(score[0] + score[1] + score[2]) / (float) 3);








}