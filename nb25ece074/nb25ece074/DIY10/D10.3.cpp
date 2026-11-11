#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Student {
private:
    std::string name;
    int marks;

public:
    
    Student() : name(""), marks(0) {}

    
    Student(std::string n, int m) : name(n), marks(m) {}

    std::string getName() const { return name; }
    int getMarks() const { return marks; }
};

int main() {
    const std::string filename = "students.txt";

    
    std::ofstream outFile(filename);
    if (!outFile) {
        std::cerr << "Error writing to file." << std::endl;
        return 1;
    }
    outFile << "Alice 88\n";
    outFile << "Bob 95\n";
    outFile << "Charlie 91\n";
    outFile << "Diana 95\n"; 
    outFile.close();

    
    std::ifstream inFile(filename);
    if (!inFile) {
        std::cerr << "Error reading from file." << std::endl;
        return 1;
    }

    std::vector<Student> students;
    std::string currentName;
    int currentMarks;

    while (inFile >> currentName >> currentMarks) {
        students.push_back(Student(currentName, currentMarks));
    }
    inFile.close();

    
    if (students.empty()) {
        std::cout << "No student records found." << std::endl;
        return 0;
    }

    int maxMarks = students[0].getMarks();
    
    
    for (const auto& student : students) {
        if (student.getMarks() > maxMarks) {
            maxMarks = student.getMarks();
        }
    }

    
    std::cout << "--- Topper Details (Highest Marks: " << maxMarks << ") ---" << std::endl;
    for (const auto& student : students) {
        if (student.getMarks() == maxMarks) {
            std::cout << "Name: " << student.getName() << std::endl;
        }
    }

    return 0;
}