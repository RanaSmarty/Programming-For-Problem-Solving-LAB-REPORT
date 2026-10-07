<h1 align="center">Programming for Problem Solving Lab Report</h1>

<section align="center">

<!-- <strong>Name:</strong> Md. Mehedi Hasan Rana<br> -->

<strong>Student ID:</strong> 263-15-590<br>
<strong>Course:</strong> Programming for Problem Solving<br>
<strong>Course Code:</strong> 114<br>
<strong>Section:</strong> 72_S

</section>

<section>

<h2>Experiment No. 02</h2>
<h3>Name of the Experiment</h3>

<strong>Check Whether a Number is Positive, Negative or Zero</strong>

</section>

<section>

<h2>Objective</h2>

<p>
To understand and implement decision-making using <code>if</code>, <code>else if</code>, and <code>else</code>
statements in the C programming language by checking whether an input number is positive, negative, or zero.
</p>

</section>

<section>

<h2>Problem Statement</h2>

<p>
Write a C program that takes an integer number as input and uses
<code>if</code>, <code>else if</code>, and <code>else</code> statements to determine whether the number is positive, negative, or zero.
</p>

<p>
Display an appropriate message based on the result.
</p>

</section>

<section>

<h2>Concept Used</h2>

<h3>If-Else-If Statement</h3>

<p>
The if-else-if statement is a decision-making structure in C. It allows a program to check multiple conditions
and execute the appropriate block of code based on the result.
</p>

<p>In this program:</p>

<ul>
    <li>If the number is less than 0, it is negative.</li>
    <li>If the number is greater than 0, it is positive.</li>
    <li>If neither condition is true, the number is zero.</li>
</ul>

</section>

<section>

<h2>Algorithm</h2>

<ol>
    <li>Start the program.</li>
    <li>Display a welcome message to the user.</li>
    <li>Declare an integer variable to store the user's input.</li>
    <li>Take an integer number from the user.</li>
    <li>Check whether the number is less than 0.</li>
    <li>If true, display that the number is negative.</li>
    <li>Otherwise, check whether the number is greater than 0.</li>
    <li>If true, display that the number is positive.</li>
    <li>Otherwise, display that the number is zero.</li>
    <li>End the program.</li>
</ol>

</section>

<section>

<h2>Source Code</h2>

```C
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
```

</section>

<section>

<h3>Sample Input 1</h3>

</section>

```text
Welcome to the Positive, Negative or Zero Checker Station.
Please enter an integer number: -10
```

<section>

<h3>Sample Output 1</h3>

</section>

```text
You entered -10, that's a negative number.
```

<section>

<h3>Sample Input 2</h3>

</section>

```text
Welcome to the Positive, Negative or Zero Checker Station.
Please enter an integer number: 7
```

<section>

<h3>Sample Output 2</h3>

</section>

```text
You entered 7, that's a positive number.
```

<section>

<h3>Sample Input 3</h3>

</section>

```text
Welcome to the Positive, Negative or Zero Checker Station.
Please enter an integer number: 0
```

<section>

<h3>Sample Output 3</h3>

</section>

```text
You entered 0, that's zero.
```

<section>
<h2>Explanation</h2>
<p>
    The program declares an integer variable named <code>number</code> to store the user's input.
    The <code>scanf()</code> function reads the entered integer.
</p>

<p>
    The program then uses an <code>if-else-if</code> structure to check the value of the number.
</p>

<p>
    <code>if (number < 0)</code><br>
    This condition checks whether the number is negative.
</p>

<p>
    <code>else-if (number > 0)</code><br>
    If the first condition is false, this condition checks whether the number is positive.
</p>

<p>
    <code>else</code>
    <br>
    If both conditions are false, the number must be zero, so the <code>else</code> block is execute.
</p>
</section>

<section>
<h2>Result</h2>
<p>
    The program successfully determines whether the entered integer is positive, negative or zero using <code>if-else-if</code> statement.
</p>
</section>

<section>
<h2>
    Conclusion
</h2>

<p>
    This experiment demonstrates the use of multiple conditional statements in C. 
    It helps in understanding how <code>if</code>, <code>else-if</code>, and <code>else</code> can be used to make decision and control the flow of a program.
</p>
</section>
