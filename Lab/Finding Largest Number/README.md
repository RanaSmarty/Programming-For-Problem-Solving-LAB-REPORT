<h1 align="center">Programming for Problem Solving Lab Report</h1>

<section align="center">
    <!-- <strong>Name: Md. Mehedi Hasan Rana</strong><br> -->
    <strong>Student ID: 262-15-590</strong><br>
    <strong>Course: Programming for Problem Solving</strong><br>
    <strong>Course Code: 114</strong><br>
    <strong>Section: 72_S</strong><br>
</section>

<section>
    <h2>Experiment No. 03</h2>
    <p>
        <strong>
            Find the Largest Number Among Two Numbers
        </strong>
    </p>
</section>

<section>
    <h2>Objective</h2>
    <p>
        To understand and implement decision-making using <code>if</code>, <code>else-if</code>, and
        <code>else</code>
        statements in the C programming language by comparing two numbers and determining the largest
        number.
    </p>
</section>

<section>
    <h2>
        Problem Statement
    </h2>
    <p>
        Write a C program that takes two numbers as input and uses an <code>if-else-if</code> statement to
        determine which number is the largest. <br>
        If both numbers are equal, display an appropriate message indicating that they are equal.
    </p>
</section>

<section>
    <h2>Concept Used</h2>
    <strong>If-Else-If Statement</strong>
    <p>
        The <code>if-else-if</code> statement is a decision-making structure in C. It allows a program to
        check multiple conditions and execute the appropriate block of code based on the result.
        <br>
        <br>
        <strong>
            In this program:
        </strong>
    </p>
    <ul>
        <li>If the number is greater => first number is largest.</li>
        <li>If both numbers are equal => both are equal.</li>
        <li>Otherwise => second number is largest.</li>
    </ul>
</section>

<section>
    <h2>Algorithm</h2>
    <ol>
        <li>Start the program.</li>
        <li>Display a welcome message to the user.</li>
        <li>Declare two integer variables.</li>
        <li>Take the first number.</li>
        <li>Take the second number.</li>
        <li>Check whether the first number is greater.</li>
        <li>If true, display the first number as largest.</li>
        <li>Otherwise, check whether both numbers are equal.</li>
        <li>If true, display that both are equal.</li>
        <li>Otherwise, display the second number as largest.</li>
        <li>End the program.</li>
    </ol>
</section>

<section>
    <h2>Source Code</h2>
</section>

```c
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

    // Compare the two numbers to determine which one is larger
    if (firstNumber > secondNumber)
    {
        // Execute this block if the first number is greater than the second number
        printf("\n%d is the largest number.", firstNumber);
    }else if (firstNumber == secondNumber)
    {
        // IF the both number is equal then execute this block of code
        printf("\nBoth are equal.");
    } else {

        // Execute this block if the second number is greater than the first number
        printf("\n%d is the largest number.", secondNumber);
    }

    // Return 0 to indicate successful program execution.
    return 0;
}

```

<section>
    <h3>Sample Input 1</h3>
</section>

```text

    Welcome to Largest Number Finder.

    Please enter the first number: 25
    Enter the second number: 10
```

<section>
    <h3>Sample Output 1</h3>
    25 is the largest number.
</section>

<section>
    <h3>Sample Input 2</h3>
</section>

```text
    Welcome to Largest Number Finder.

    Please enter the first number: 7
    Enter the second number: 20

```

<section>
    <h3>Sample Output 2</h3>
</section>

```text
    20 is the largest number.
```

<section>
    <h3>Sample Input 3</h3>
</section>

```text
    Welcome to Largest Number Finder.

    Please enter the first number: 10
    Enter the second number: 10
```

<section>
    <h3>Sample Output 3</h3>
</section>

```text
    Both are equal.
```

<section>
    <h2>Explanation</h2>
    <p>Explain:</p>
    <p>
        <code>firstNumber > secondNumber</code> => first is larger.
    </p>
    <p>
        <code>firstNumber == secondNumber</code> => Both are equal.
    </p>
    <p>
        <code>else</code> => second number is larger.
    </p>

</section>

<section>
    <h2>Result</h2>
    <p>
        The program successfully determine the largest number between two integer and
        identifies when both numbers are equal.
    </p>
</section>

<section>
    <h2>Conclusion</h2>
    <p>
        This experiment demonstrates the use of multiple conditional statements in C and helps in
        understanding how two values can be compared using <code>if</code>, <code>else-if</code>, and
        <code>else</code>.
    </p>
</section>
