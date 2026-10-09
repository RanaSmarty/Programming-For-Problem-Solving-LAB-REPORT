<h1 align="center">Programming for Problem Solving Lab Report</h1>

<div align="center">

<!-- <strong>Name:</strong> Md. Mehedi Hasan Rana<br> -->
<strong>Student ID:</strong> 262-15-590<br>
<strong>Course:</strong> Programming for Problem Solving<br>
<strong>Course Code:</strong> 114<br>
<strong>Section:</strong> 72_S

</div>

## Experiment No. 06

### Name of the Experiment

<strong>Find the Largest Number Among Three Numbers Using If-Else-If Statement</strong>

## Objective

To understand and implement decision-making using `if`, `else if`, and `else` statements in C by comparing three numbers and determining the largest number.

## Problem Statement

Write a C program that takes three numbers as input and uses `if`, `else if`, and `else` statements to determine which number is the largest.

If two or all three numbers share the largest value, display an appropriate message indicating the result.

## Concept Used

### If-Else-If Statement

The `if`, `else if`, and `else` statements allow a C program to check conditions and execute the appropriate block of code.

In this program:

- If the first number is greater than both the second and third numbers, the first number is displayed.
- If the second number is greater than both the first and third numbers, the second number is displayed.
- Otherwise, the third number is displayed.

The logical AND operator (`&&`) combines two conditions. Both conditions must be true for the complete expression to be true.

## Algorithm

1. Start the program.
2. Display a welcome message.
3. Declare three `double` variables.
4. Take three numbers from the user.
5. Check whether the first number is greater than both the second and third numbers.
6. If true, display the first number as the largest.
7. Otherwise, check whether the second number is greater than both the first and third numbers.
8. If true, display the second number as the largest.
9. Otherwise, display the third number as the largest.
10. Display a farewell message.
11. End the program.

## Source Code

```c
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
```

## Sample Input and Output

```text
Welcome to the Largest Finder Station.

Please enter the first number: 50
Enter the second number: 20
Finally, enter the last number: 10

50.0 is the largest number.

Thanks for using this app,
Have a nice day!
```

## Discussion

The program compares three numbers using an `if-else if-else` structure and the logical AND operator (`&&`).

However, the current logic does not correctly handle every case involving equal largest values. For example, inputs of `20`, `20`, and `10` cause the program to display `10.0` as the largest number.

---

## Conclusion

This experiment demonstrates how conditional statements and the logical AND operator can be used to compare three numbers in C.
