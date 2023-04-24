#include <cs50.h>
#include <stdio.h>



int main(void)
{
    // TODO: Prompt for start size
        int start;
        do
        {
            start = get_int("size size: ");
        }
        while (start < 9);
    // TODO: Prompt for end size
        int end;
        do
        {
            end = get_int("end size: ");
        }
        while (start > end );
    // TODO: Calculate number of years until we reach threshold

        int new = start;
        int years = 0;
        while (new < end)
        {
        new = (new + new/3 - new/4);
        years++;
        }

        printf("Years: %i\n", years);

        //




}
