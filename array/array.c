#include <cs50.h>
#include <stdio.h>

int main (void)
{
    // do while loop with a declared int L

    int L;
    do
    {
        // asking the user for a input
        L = get_int("Lenght: ");
    }
    // making sure its more than 1
    while (L < 1);

    // made an array with in the input from L

    int twice[L];

    // we set the array first spot assined to 1

    twice[0] = 1;

    // printed out the first spot in our array

    printf("%i\n", twice[0]);

    // created a for loop

    for (int i = 1; i < L; i++)
    // notice how I started out at 1 instead of 0, because we already printed out that out above
    {
        // the array of our loop is equal to 2 * twice in the array of our loop minus one
        // making the current element twice the previous one
        twice[i] = 2 * twice[i -1];
        // printed out the array of our loop //
        printf("%i\n", twice[i]);


    }






}