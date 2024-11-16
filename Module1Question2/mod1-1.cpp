/*
 * app.cpp
 *
 *  Created on: Nov 14, 2024
 *      Author: braedencasados
 */


#include <iostream> // Corrected the iostream library inclusion
// Removed <conio.h> as it is not supported on macOS or modern compilers

using namespace std; // Standard namespace declaration

// Main Function
int main() {
    // Standard Output Statement
    cout << "Welcome to this C++ Program" << endl; // Added missing semicolon at the end

    // Fixed the syntax error: Added double quotes around the output string
    cout << "I have corrected all errors for this program." << endl;

    // Wait For Output Screen
    // Replaced getch() with cin.get() for cross-platform compatibility
    cin.get();

    // Main Function return Statement
    return 0; // Added return statement to indicate successful program execution
}
