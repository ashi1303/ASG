#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // asked the user for a word
    string word = get_string("Enter Word: ");

    // created a new int  that holds the string length of word
    int alpha = strlen(word);

    // creating a for loop to figure out if the the letters are in order
    // alpha - 1
    for (int i = 0; i < alpha - 1; i++)
    {
        if (word[i] > word[i + 1])
        {
            printf("No\n");
            return 0;
        }
        else
        {
            printf("Yes\n");
            return 0;
        }

    }




}