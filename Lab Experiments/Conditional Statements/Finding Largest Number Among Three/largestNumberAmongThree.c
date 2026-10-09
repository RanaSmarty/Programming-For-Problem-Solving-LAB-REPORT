/**
Problem Statement

Write a C program that takes three numbers as input and uses
`if-else if-else` statements to determine which number is the largest.

If two or all three numbers are equal and share the largest value, display an appropriate message indicating the result.

*/

// Include the standard input/output header file.
#include <stdio.h>

int main()
{ // Declare the main function where the code will execute.

    // Greeting message for the user.
    printf("\nWelcome to the Largest Finder Station.\n");

    /*
        // Declare three double variables to store the user's input.
        and Read those number by using scanf() function.
    */
    double firstNumber;
    double secondNumber;
    double thirdNumber;

    // Prompting the user to enter values one by one...
    printf("\nPlease enter the first number: ");
    scanf("%lf", &firstNumber);

    printf("Enter the second number: ");
    scanf("%lf", &secondNumber);

    printf("Finally, enter the last number: ");
    scanf("%lf", &thirdNumber);

    /*
        Compare the three numbers to determine which one is the largest.
    */

    if (firstNumber > secondNumber && firstNumber > thirdNumber)
    {
        /*
            If the first number is greater than both the second and third numbers,
            execute this block of code and print the first number as the largest.
        */
        printf("\n%.1lf is the largest number.\n", firstNumber);
    }
    else if (secondNumber > firstNumber && secondNumber > thirdNumber)
    {
        /*
            If the second number is greater than both the first and third numbers,
            execute this block of code and print the second number as the largest.
        */
        printf("\n%.1lf is the largest number.\n", secondNumber);
    }
    else
    {
        /*
            If neither the first nor the second number is the largest,
            execute this block of code and print the third number as the largest.
        */
        printf("\n%.1lf is the largest number.\n", thirdNumber);
    }

    // Wish for the user...
    printf("\nThanks for using this app,\nHave a nice day!");

    return 0; // Return 0 to indicate successful program execution.
}
