/**
Problem Statement:

Write a C program that takes two numbers as input and uses an `if-else` statement 
to determine which number is the largest.

If both numbers are equal, display an appropriate message indicating that they are equal.

*/

// Include the standard input/output header file
#include <stdio.h>

int main() { // Declare the main function

    printf("\nWelcome to Largest Number Finder.\n"); // Welcome message for the user

    /*
        Declare two local integer variables to 
        store the user inputted first and second number.
    */
    int firstNumber;
    int secondNumber;

    printf("\nPlease enter the first number: "); // Prompt the user and read the first input and store it to first variable.
    scanf("%d", &firstNumber);

    printf("Enter the second number: "); // Again ask the user and read the second input and store it to second variable.
    scanf("%d", &secondNumber);

    // Check those number whether it's greater.
    if (firstNumber > secondNumber)
    {
        //Execute this block of code if the number is greater than the second number.
        printf("\n%d is the largest number.", firstNumber);
    }else if (firstNumber == secondNumber)
    {
        // IF the both number is equal then execute this block of code
        printf("\nBoth are equal.");
    } else {

        // Otherwise, execute this block of code
        printf("\n%d is the largest number.", secondNumber);
    }

    // Return 0 to indicate successful program execution.
    return 0;
}