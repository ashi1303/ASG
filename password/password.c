// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{

    // created new bool for checking
   bool checkLower  =  false;
   bool checkUpper  =  false;
   bool checkNumber =  false;
   bool checkSymbol =  false;
// put the bools in loop
   for (int i = 0; i < strlen(password); i++)
   {
// used ctype to check if the bool was lower, upper, number, or isnt a alnum
        if (islower(password[i]))
        {
            checkLower = true;
        }
        if (isupper(password[i]))
        {
            checkUpper = true;
        }
        if (isdigit(password[i]))
        {
            checkNumber = true;
        }
        // i didnt want a alnum so i used a not in this code
        if (!isalnum(password[i]))
        {
            checkSymbol = true;
        }
   }
     if (checkLower == true && checkUpper == true && checkNumber == true && checkSymbol == true)
    return true;


    return false;
}
