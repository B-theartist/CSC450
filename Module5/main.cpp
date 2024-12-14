/*
 * main.cpp
 *
 *  Created on: Dec 13, 2024
 *      Author: braedencasados
 */
/*
Pseudocode:

1. Start

2. Define Function: appendToFile(fileName)
    a. Open fileName in append mode.
    b. Check if the file opens successfully:
        i. If yes, prompt the user to input a line of text.
        ii. Append the user input to the file.
        iii. Close the file and confirm success.
        iv. If not, display an error message.

3. Define Function: reverseFileContent(inputFile, outputFile)
    a. Open inputFile in read mode.
    b. Check if the inputFile opens successfully:
        i. If yes, read the content into a string.
        ii. Reverse the string.
        iii. Open outputFile in write mode.
        iv. Check if outputFile opens successfully:
            - If yes, write the reversed content to outputFile.
            - If not, display an error message.
        v. Close the files.
    c. If inputFile fails to open, display an error message.

4. Main Function:
    a. Define inputFile = "CSC450_CT5_mod5.txt"
    b. Define reversedFile = "CSC450-mod5-reverse.txt"
    c. Call appendToFile(inputFile) to append user input to the file.
    d. Call reverseFileContent(inputFile, reversedFile) to reverse file content and save it to reversedFile.

5. End
*/


#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

void appendToFile(const std::string& fileName) {
    std::ofstream outFile(fileName, std::ios::app);
    if (!outFile) {
        std::cerr << "Error: Unable to open file for appending." << std::endl;
        return;
    }

    std::string userInput;
    std::cout << "Enter a line to append to the file: ";
    std::getline(std::cin, userInput);

    outFile << userInput << std::endl;
    outFile.close();
    std::cout << "Data appended successfully." << std::endl;
}

void reverseFileContent(const std::string& inputFile, const std::string& outputFile) {
	std::ifstream inFile(inputFile);
	if (!inFile) {
	    std::cerr << "Error: Unable to open input file: " << inputFile << std::endl;
	    return;
	} else {
	    std::cout << "File opened successfully: " << inputFile << std::endl;
	}

    // Read file content into a string
    std::string content;
    content.assign(std::istreambuf_iterator<char>(inFile), std::istreambuf_iterator<char>());
    inFile.close();

    if (content.empty()) {
        std::cerr << "Error: Input file is empty or not read correctly." << std::endl;
        return;
    }

    // Reverse the content
    std::reverse(content.begin(), content.end());

    // Write reversed content to the output file
    std::ofstream outFile(outputFile);
    if (!outFile) {
        std::cerr << "Error: Unable to open output file: " << outputFile << std::endl;
        return;
    }

    outFile << content;
    outFile.close();

    std::cout << "Reversed content written to " << outputFile << " successfully." << std::endl;
}

int main() {
    const std::string inputFile = "CSC450_CT5_mod5.txt";
    const std::string reversedFile = "/Users/braedencasados/Desktop/School/CSC450/Module5/Module5/CSC450-mod5-reverse.txt";

    appendToFile(inputFile);
    reverseFileContent(inputFile, reversedFile);

    return 0;
}


