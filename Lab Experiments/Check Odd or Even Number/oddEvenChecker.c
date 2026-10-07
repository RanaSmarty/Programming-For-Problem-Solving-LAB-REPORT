/*
2. Check Whether a Number Is Even or Odd

Write a C program that takes an integer number as input and uses an if-else statement to determine whether the number is even or odd. 
Display an appropriate message based on the result.
*/

// Include the standard input/output header file
#include <stdio.h>

// Declare the main function
int main() {

    // Display a greeting message to the user...
    printf("Welcome to Even or Odd Checker Program.\n");

    // Declare a local integer variable to store the user's input
    int userNumber;

    // Prompt the user to enter the number to check whether it's Odd or Even.
    printf("\nEnter the number please: ");

    // Read the user's input and store it in the local variable
    scanf("%d", &userNumber);


    // Check the user inputted number is odd or even number
    if (userNumber % 2 == 0)
    {
        // Execute this block of code if the number is even
        printf("\nYou entered %d, that's an even number.", userNumber);
    } else {
        // Execute this block if the number is odd.
        printf("\nYou entered %d, that's an odd number.", userNumber);
    }
    
    // Return 0 to indicate successful program execution.
    return 0;
}