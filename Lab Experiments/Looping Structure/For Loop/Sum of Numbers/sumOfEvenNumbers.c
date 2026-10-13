/*
Problem Statement

Write a C program that uses a `for` loop to find and calculate the sum of all even numbers between 1 and 100.

Display all the even numbers in a summation format separated by `+` signs (e.g., 2 + 4 + 6 + ... + 100), followed by the final sum.
*/

// Include the standard input/output header file
#include <stdio.h>

int main()  // The main function where the program start execution
{

    // Show the greeting message to the user
    printf("\nWelcome to the Summation fo Even Number Calculator.\n");

    // Declare and initialize the variables required for the calculation.
    int number = 100;        // Store the uper limit of the calculation
    int summationOfEven = 0; // Store the sum of the even numbers.

    // Display the label for the summation sequence:
    printf("\nSummation: ");

    // Loop through all the numbers from 1 to 100;
    for (int index = 1; index <= number; index++)
    {
        // Check whether the current number is even or not.
        if (index % 2 == 0)
        {
            // Add the current even number to the total sum
            summationOfEven += index;

            // Display the current even number.
            printf("%d", index);

            // Print a plus sign after each even number except the last one
            if (index < number)
            {
                printf(" + ");
            }
        }
    }

    // Display the final result after the loop complete.
    printf("\n");
    printf("\nThe sum of all even numbers between 1 to 100: %d", summationOfEven);

    // Return 0 to indicate successful program execution!
    return 0;
}