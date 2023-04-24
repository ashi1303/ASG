#include <cs50.h>
// This is a library for cs50 that allows me to use get string
#include <stdio.h>

int main(void)
{
    string name = get_string("What your name?\n");
    printf("Hello, %s\n", name);

    // NOTES

    // string is called name which i created, 'get string' allows me to get user input. Read right to left..
    //asking whats your name, leaving a space for user input after new line.

    // introduction to a placeholder of a string that is represtned by the '%'
    // printing on the screen hello whatever the user said..
    // the string is placed after the quotation markers

}