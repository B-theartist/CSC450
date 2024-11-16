/*
 * mod1-2.cpp
 *
 *  Created on: Nov 14, 2024
 *      Author: braedencasados
 */

#include <iostream> // Corrected the iostream library inclusion
// Removed <conio.h> since it is not supported on macOS or modern compilers

using namespace std; // Standard namespace declaration

// Main Function
int main() {
    double myMoney = 1000.50; // Declare and initialize variable to store money

    // Standard Output Statement - corrected the syntax error
    cout << "Please be sure to correct all syntax errors in this program" << endl;
    cout << "I have corrected all errors for this program." << endl;

    // Fixed syntax error: Removed extra << and printed the variable myMoney correctly
    cout << "The total amount of money available is = " << myMoney << endl;

    // Wait For Output Screen
    // Replaced getch() with cin.get() for cross-platform compatibility
    cin.get();

    // Main Function return Statement
    return 0;
}



