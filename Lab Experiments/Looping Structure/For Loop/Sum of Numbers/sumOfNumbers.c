/*
Problem Statement

Write a C program that uses a `for` loop to calculate the sum of all integers from 1 to 100.

Display the final sum.
*/


// Include the standard input/output header file before starting
#include <stdio.h>

// The main function where the program start executing...
int main () {

    printf("Welcome to Summation Station!\n");  // Display the greeting message to the user.

    // Declare and initialize the variables required for the calculation
    int number = 100;   // Store the upper limit of the summation
    int sum = 0;        // Initialize the sum to zero (0).

    // Use the `for` loop to calculate the sum of integers from  1 to 100;
    for (int index = 1; index <= number; index++)
    {
        /* 
            Add the current value of index to the running sum...
        */
        sum += index;
    }

    // Display the final sum of integers from 1 to 100
    printf("\nThe value of the summation of 1 to 100: %d", sum);

    // Return 0 to indicate successful program execution
    return 0;
}