/*
3. Check Whether a Student Has Passed or Failed

Write a C program that takes a student's marks as input and uses an if-else statement to determine whether the student has passed or failed.
The student passes if the marks are 40 or above; otherwise, the student fails.
Display an appropriate message based on the result.

*/

// Include the standard input /output header file
#include <stdio.h>

// Declare the main function where the program will execute
int main() {

    // Display a welcome message to the user.
    printf("\nWelcome to the Result Generator Station.\n");

    // Declare a local variable with double data type to store the student's marks.
    double userMarks;

    // Prompt the user to enter the marks to check whether it has passed or failed
    printf("\nEnter your marks: ");

    // Read the user's input and store it in the local variable.
    scanf("%lf", &userMarks);

    // Check whether the entered marks are within the valid range...
    if (userMarks <= 100 && userMarks >= 0)
    {
        // If the marks are valid, check whether the student has passed or failed.
        if (userMarks >= 40)
        {
            // Execute this block of code if the student has passed.
            printf(
                "\nPassed.");
        }
        else
        {

            // Execute this block if the student has failed. 
            printf(
                "\nFailed.");
        }
    } else {

        // Display an invalid message to user 
        printf("\nInvalid marks, try again!");
    }

    // Return 0 to indicate successfully program execution.
    return 0;
}