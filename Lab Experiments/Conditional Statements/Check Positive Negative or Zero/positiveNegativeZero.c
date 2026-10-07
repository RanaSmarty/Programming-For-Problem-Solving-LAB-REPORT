/*
Problem Statement

Write a C program that takes an integer number as input and uses an `if-else if-else` statement to determine 
whether the number is positive, negative, or zero.

Display an appropriate message based on the result.

*/

// Include the standard input / output header file.
#include <stdio.h>

int main() { // Declare the main function where the code starts executing.

    // Display a greeting message to the user.
    printf("\nWelcome to the Positive, Negative or Zero Checker Station.\n");

    // Prompt the user to enter an integer number
    printf("\nPlease enter an integer number: ");

    int number; // Declare a local integer variable to store the user inputted value

    // Read the number and store it in the variable
    scanf("%d", &number);


    // Check whether the number is positive, negative or zero
    if (number < 0)
    {
        // Execute this block of code if the number is less than 0 (zero).
        printf("\nYou entered %d, that's a negative number.", number);
    } else if (number > 0)
    {
        // If the entered number is more than zero, then execute this part of code.
        printf("\nYou entered %d, that's a positive number.", number);
    } else {

        // Else display, this number is zero
        printf("\nYou entered %d, that's zero.", number);
    }
    

    // Return 0 to indicate successful program execution...
    return 0;
}