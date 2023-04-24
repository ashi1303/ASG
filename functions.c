#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int size);

int main(void)
{

// get size of grid
    int n = get_size();


// print grid

    print_grid(n);




}
// function for get sizd
// void for no input just outputs
int get_size(void)
{
    int n;
    do
    {
        n = get_int("size: ");
    }
    while (n < 1);


    return n;
    // retun n for returning vaule
}

// function for print grid

void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        printf("#");
        printf("\n");

    }


}