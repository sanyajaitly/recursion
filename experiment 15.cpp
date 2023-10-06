/*Name-Sanya Jaitly
PRN-22070123100
Exp-15(Part-A)
Function to calculate factorial recursively
*/
#include <iostream>
using namespace std;

// Function to calculate factorial recursively
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;
    
    // Check if the input is non-negative
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int result = factorial(num);
        cout << "Factorial of " << num << " is " << result << endl;
    }
    
    return 0;
}
/*Output
Enter a non-negative integer: 3
Factorial of 3 is 6
*/

/*
Exp-15(Part-B)
Recursive function to calculate the sum of integers from 1 to 'n'
*/
#include <iostream>
using namespace std;

// Recursive function to calculate the sum of integers from 1 to 'n'
int sumOfIntegers(int n) {
    // Base case: If 'n' is 1, return 1
    if (n == 1) {
        return 1;
    }
    // Recursive case: Calculate the sum from 1 to 'n' by adding 'n' and the sum of integers from 1 to 'n-1'
    return n + sumOfIntegers(n - 1);
}

int main() {
    int n;
    cout << "Enter a positive integer 'n': ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    int result = sumOfIntegers(n);
    cout << "The sum of integers from 1 to " << n << " is: " << result << endl;

    return 0;
}
/*Output
Enter a positive integer 'n': 2
The sum of integers from 1 to 2 is: 3
*/

/*
Exp-15(Part-C)
Recursive function to print a string in reverse
*/
#include <iostream>
#include <cstring> // Include the header for strlen function
using namespace std;

// Recursive function to print a string in reverse
void printReverseString(const char* str, int n) {
    // Base case: If the string is empty (n is 0), return
    if (n == 0) {
        return;
    }

    // Print the last character of the string
    cout << str[n - 1];

    // Call the function recursively with the string excluding the last character
    printReverseString(str, n - 1);
}

int main() {
    char str[100]; // Declare a character array to store the input string
    cout << "Enter a string: ";
    cin.getline(str, sizeof(str)); // Read a string from the user

    int n = strlen(str); // Calculate the length of the input string

    cout << "String in reverse: ";
    printReverseString(str, n); // Call the recursive function

    cout << endl; // Print a newline character for formatting

    return 0;
}
/*Output
Enter a string: Symbiosis Institute Of Technology
String in reverse: ygolonhceT fO etutitsnI sisoibmyS
*/