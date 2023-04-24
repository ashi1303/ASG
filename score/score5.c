#include <cs50.h>
#include <stdio.h>

// created a constant interger to replace the numbers below
const int N = 3;

// created a function to get average

float average(int array[]);



int main(void)
{

    int score[N];
    for (int i = 0; i < N; i++)
    {
        score[i] = get_int("Enter Grade: ");
    }
    // Func for averaged was created plugged into our printf line

    printf("Avg: %f\n", average(score));


}

// the function is coded here

float average(int array[])
{
    // created a new interger call sum
    int sum = 0;
    // put sum in a loop
    // the loop is less than our Const N
    for (int i = 0; i < N; i++)
    {
        //
        sum += array[i];
    }
    // sum divied by our consta which is three is the return valure
    return sum / (float) N;
}