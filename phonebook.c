#include <cs50.h>
#include <stdio.h>

int main(void)
{

    string name = get_string("What's your name?: ");

    int age = get_int ("Enter your age: ");

    long number = get_long("Enter your number: ");


    printf("%s\n%i\n%li\n", name, age, number);












}