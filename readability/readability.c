#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_letters(string text);

int main(void)
{
    string text = get_string("Text: ");
    printf("%s\n", text);
    printf("Grade: \n");






}

int count_letters(string text)
{
    int letters = 0;
    int words = 0;
    int sentences = 0;



    for (int i = 0; i < strlen(text); i++)
    {
        if(isalph(text[i]))
        {
            letters++
        }
        else if (text == '')
        {
            words++
        }
        else if (text[i] == '' ||  text[i] == )

    }



}







// index = 0.0588 * L - 0.296 * S - 15.8
