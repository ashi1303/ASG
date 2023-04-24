#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("height: ");
    }
    while (n < 1 || n > 8);
// loop for rows
   for (int i = 0; i < n; i++)
    { // for space
        for (int k = 0; k < n - i - 1; k++)
        {
            printf(" ");
        }
// loop for hashes
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");

        }

// new lines
        printf("\n");

    }




}