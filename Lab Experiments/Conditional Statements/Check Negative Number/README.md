<h1 align="center" style="color: red;">Programming for Problem Solving Lab Report</h1>

<div align="center">

<!-- <strong>Name:</strong> Md. Mehedi Hasan Rana<br> -->
<strong>Student ID:</strong> 263-15-590<br>
<strong>Course:</strong> Programming for Problem Solving<br>
<strong>Course Code:</strong> 114<br>
<strong>Section:</strong> 72_S

</div>

<h2 style="color:#69add2;">Experiment No: 01</h2>

<strong>Name of the experiment:</strong><br>
Check whether the number is negative or non-negative.

<h2 style="color:#69add2;"> Objective</h2>

<p>To understand and implement decision-making using if-else statement in C programming language by checking whether an input number is negative or non-negative.</p>

<h2 style="color:#69add2;">Problem Statement</h2>

<p>Write a C program that takes an integer as input and uses an `if-else` statement to determine whether the number is negative or non-negative.

Display an appropriate message based on the result.
</p>
<h2 style="color:#69add2;">Concept Used</h2>

<h2 style="color:#69add2;">If-Else Statement</h2>

The `if-else` statement is a decision-making statement in C. It allows the program to execute different blocks of code based on whether specified conditions are true or false.

In this program:

- If the number is less than 0, it is negative.
- If the number is greater than 0, it is non-negative.

<h2 style="color:#69add2;">Algorithm</h2>

1. Start the program.
2. Display a greeting message to the user.
3. Declare an integer variable to store the user inputted value.
4. Take an integer number from the user.
5. Check the number whether it's less than 0.
6. If true, display that the number is negative.
7. Else, execute that the number is non-negative.
8. End the program.

<h2 style="color:#69add2;">Source Code</h2>

```c
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
```

<h3 style="color:#69add2;">Sample Input</h3>

```bash
Welcome to Negative Number Checker.

Enter the number you want to check: -25
```

<h3 style="color:#69add2;">Sample Output</h3>

```bash
Your entered a negative number.
```

<h2 style="color:#69add2;">Explanation</h2>

The program declares an integer variable named `userInputtedNumber` to store the user's input. The `scanf()` function reads the entered number.

The program then uses an `if-else` structure:

`if (userInputtedNumber < 0)`

This checks whether the number is negative.

`else`

If neither condition is true, the number is non-negative.

<h2 style="color:#69add2;">Result</h2>

The program successfully determines whether the entered integer is negative or non-negative using `if-else` statement.

<h2 style="color:#69add2;">Conclusion</h2>

This experiment demonstrates the use of decision-making statements in C language. It helps in understanding how conditions can be used to control the flow of a program.
