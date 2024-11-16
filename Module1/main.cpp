/*
 * main.cpp
 *
 *  Created on: Nov 14, 2024
 *      Author: braedencasados
 */

//pseudocode
// BEGIN
// Step 1: Declare variables to store person's information
// Declare string variable firstName
// Declare string variable lastName
// Declare string variable streetAddress
// Declare string variable city
// Declare string variable zipCode
//
// Step 2: Assign values to the variables
// Set firstName to "Patrick"
// Set lastName to "Star"
// Set streetAddress to "120 Conch Street"
// Set city to "Bikini Bottom"
// Set zipCode to "12345"
//
// Step 3: Display the information on the console
// Print "First Name: " followed by firstName
// Print "Last Name: " followed by lastName
// Print "Street Address: " followed by streetAddress
// Print "City: " followed by city
// Print "Zip Code: " followed by zipCode
//
// Step 4: End the program
// RETURN 0
// END

#include <iostream>
#include <string> // Make sure this is included
using namespace std;

int main() {
    // Declare variables for storing information
    string firstName = "Patrick";
    string lastName = "Star";
    string streetAddress = "120 Conch Street";
    string city = "Bikini Bottom";
    string zipCode = "12345";

    // Display the information to the console
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Street Address: " << streetAddress << endl;
    cout << "City: " << city << endl;
    cout << "Zip Code: " << zipCode << endl;

    return 0;
}



