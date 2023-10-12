# recursion

TITLE: Reccurion in C++

AIM: To write program in C++ using recusion and using string in it.

THEORY: Recursion in C++ is a programming technique where a function calls itself to solve a problem. It typically consists of a base case to terminate the recursion and a recursive case that breaks down the problem into smaller, similar subproblems. To prevent infinite recursion, ensure that the base case is reached eventually. Use recursion when it simplifies code and logic, but be cautious of performance and stack overflow issues in deep recursive calls.

ALGORITHM:

Algorithm for Program 1: Calculate Quotient and Remainder

Start
Declare variables: divisor, dividend, quotient, remainder
Prompt the user to enter the numerator (dividend)
Read the value of dividend from the user
Prompt the user to enter the divisor
Read the value of divisor from the user
Calculate the quotient as dividend divided by divisor
Calculate the remainder as dividend modulo divisor
Display the quotient and remainder
End
Algorithm for Program 2: Sum of Positive Integers Using Recursion

Start

Declare a function prototype for add(int n)

Declare a variable n

Prompt the user to enter a positive integer and read it into n

Call the add function with n as an argument and display the result

In the add function: a. If n is not equal to 0:

i. Return n + add(n-1)

b. Else, return 0

End

Algorithm for Program 3:Calculate Factorial of a Positive Integer

Start

Declare variables: n (for input), factorial (initialized to 1)

Prompt the user to enter a positive integer and read it into n

Check if n is less than 0:

a. If true, display "Factorial of a negative number doesn't exist"

b. If false, continue to the next step

Initialize a for loop with index variable i from 1 to n (inclusive)

a. Inside the loop, multiply the factorial by i in each iteration

Display "Factorial of n = factorial" where n is the input and factorial is the result

End

Algorithm for Program 4: Print a String in Reverse Using Recursion

Start
Declare a function print_rev that takes a character pointer str as an argument
Inside the print_rev function:
a. Check if the current character pointed to by str is not '\0' (the null terminator) i. If true:

Call print_rev with str+1 to move to the next character in the string

Display the current character pointed to by str

In the main function:

a. Declare a character array str of size 20

b. Prompt the user to enter a string and read it into the str array

c. Call the print_rev function with str as an argument

End

CONCLUSION: In conclusion, recursion in C++ is a powerful programming technique that allows a function to call itself, simplifying complex problems by breaking them down into smaller, manageable subproblems. It relies on a base case to terminate the recursive calls, ensuring that the program doesn't enter an infinite loop. While recursion can lead to elegant and concise code, it's essential to be mindful of potential performance issues and stack overflow errors, especially when dealing with deep recursive calls. Recursion is a valuable tool in C++ for solving various problems, from mathematical calculations to traversing data structures, making code more readable and maintainable when used judiciously.
