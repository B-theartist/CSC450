//============================================================================
// Name        : Module3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * Pseudocode for Integer Pointers Program
 *
 * 1. Start the program.
 * 2. Prompt the user to enter three integer values.
 * 3. Store the input values into three separate variables: var1, var2, var3.
 * 4. Use the `new` operator to dynamically allocate memory for three integer pointers: ptr1, ptr2, ptr3.
 * 5. Assign the values of var1, var2, and var3 to the memory locations pointed to by ptr1, ptr2, and ptr3.
 * 6. Display the values of the variables and the values pointed to by the pointers.
 * 7. Use the `delete` operator to release the dynamically allocated memory.
 * 8. End the program.
 */

#include <iostream>
using namespace std;

int main() {
    // Declare variables to store user input
    int var1, var2, var3;

    // Prompt user for input
    cout << "Enter the first integer: ";
    cin >> var1;

    cout << "Enter the second integer: ";
    cin >> var2;

    cout << "Enter the third integer: ";
    cin >> var3;

    // Dynamically allocate memory for integer pointers
    int* ptr1 = new int;
    int* ptr2 = new int;
    int* ptr3 = new int;

    // Assign values to dynamically allocated memory
    *ptr1 = var1;
    *ptr2 = var2;
    *ptr3 = var3;

    // Display the contents of variables and pointers
    cout << "\nDisplaying Contents:" << endl;
    cout << "Variable 1: " << var1 << ", Pointer 1: " << *ptr1 << endl;
    cout << "Variable 2: " << var2 << ", Pointer 2: " << *ptr2 << endl;
    cout << "Variable 3: " << var3 << ", Pointer 3: " << *ptr3 << endl;

    // Free dynamically allocated memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    // Display confirmation of memory release
    cout << "\nDynamic memory has been released." << endl;

    return 0;
}
