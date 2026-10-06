/*
Question 1:
Write a C program that takes an integer as input and uses an if-else statement to determine whether the number is negative or non-negative.
Display an appropriate message based on the result.
*/

// Include the standard input/output header file
#include <stdio.h>

// Declare the main method / function
int main() {

    // Display a greeting message to the user.
    printf("Welcome to Negative Number Checker.\n");

    // Declare a local variable with integer data type that will store user inputted number.
    int userInputtedNumber;

    // Prompt the user to enter a number that the user to check whether it's negative or non-negative.
    printf("\nEnter the number you want to check: ");

    // Read the user's input and store it in the variable
    scanf("%d", &userInputtedNumber);

    // Check whether the entered number is negative or non-negative number.
    if (userInputtedNumber < 0)
    {
        // Execute this block if the number is negative
        printf("\nYour entered a negative number.");
    }
    else
    {
        // Execute this block if the number is zero
        printf("\nYou entered a non-negative number.");
    }

    // Return 0 to indicate successful program execution.
    return 0;
}