#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO

    string m = get_string("Message: ");

    for (int i = 0; i < strlen(m); i++)
    {
        // created a new char and assigned it my string array
        char zeros = m[i];
        // new int array assigned to bits
        int binary[BITS_IN_BYTE];
        // quotions assigned to our char
        int q = zeros;
        // unnassigned remainder
        int remainder;

        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            // remainder = q remainder 2
            remainder = q % 2;
            // new array which is assainged to remainder
            binary[j] = remainder;
            // our q is divided and equal to 2
            q /= 2;

        }
        // reverse of our loop sunce it was displaying backwards
        for (int k = BITS_IN_BYTE - 1; k >= 0; k--)
        {
            // using our function as output with binary array set to k
            print_bulb(binary[k]);
        }
        printf("\n");


    }



}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}