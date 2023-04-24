// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// function called replace that returns argv[]
string replace(string input);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Wrong Command Line Argument\n");
        return 1;
    }

    string word = argv[1];

    string result = replace(word);

    printf("%s\n", word);


}

string replace(string input)
{
    string output = input;
    for (int i = 0; i < strlen(input); i++)
    {
        char s = tolower(input[i]);
        switch (s)
        {
            case 'a':
                output[i] = '6';
                break;

            case 'e':
                output[i] = '3';
                break;

            case 'i':
                output[i] = '1';
                break;
            case 'o':
                output[i] = '0';
                break;

            default:
                output[i] = input[i];
                break;
        }


    }
    return output;
}

