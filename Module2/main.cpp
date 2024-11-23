/*
 * InputStringAssignment.cpp
 *
 *  Created on: Nov 23, 2024
 *      Author: braedencasados
 */

/*
 * Pseudocode
 * START
1. Create a program to take two string inputs from the user.
2. Repeat the process 3 times:
   a. Prompt the user to input the first string.
   b. Prompt the user to input the second string.
   c. Concatenate the two strings.
   d. Print the concatenated result to the console.
3. End the program.
END
 */

#include <iostream>
#include <string>

int main() {
    // Repeat the process 3 times
    for (int i = 1; i <= 3; ++i) {
        std::string firstString, secondString;

        // Prompt the user for the first string
        std::cout << "Iteration " << i << ": Enter the first string: ";
        std::getline(std::cin, firstString);

        // Prompt the user for the second string
        std::cout << "Iteration " << i << ": Enter the second string: ";
        std::getline(std::cin, secondString);

        // Concatenate the strings
        std::string concatenatedResult = firstString + " " + secondString;

        // Print the result
        std::cout << "Concatenated result: " << concatenatedResult << std::endl << std::endl;
    }

    return 0;
}

