#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inFile("in.txt");
    std::ofstream outFile("out.txt");

    if (!inFile || !outFile) {
        std::cerr << "Error opening input or output file." << std::endl;
        return 1;
    }

    std::string line;
    int lineNumber = 1;

    while (std::getline(inFile, line)) {
        outFile << lineNumber << ": " << line << "\n";
        lineNumber++;
    }

    std::cout << "Successfully copied with line numbers to out.txt" << std::endl;

    inFile.close();
    outFile.close();
    return 0;
}