#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{

    string h = get_string("Before: ");

    printf("After: ");

    for (int i = 0; i < strlen(h); i++)
    {
       if (h[i] >= 'a' && h[i] <= 'z')
       {
        printf("%c", h[i] - 32);

       }
       else
       {
        printf("%c", h[i]);
       }
    }

    printf("\n");











}