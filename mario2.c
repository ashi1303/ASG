#include <cs50.h>
#include <stdio.h>

int main (void)
{
    // intro 'do' loop
    
    int n;
    do
    {
        n = get_int("Add Size: ");
    }
    while (n < 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}