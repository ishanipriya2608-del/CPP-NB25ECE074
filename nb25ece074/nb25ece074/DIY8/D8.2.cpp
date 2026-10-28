#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Logger {
public:
    virtual void write(string message) = 0;
    virtual ~Logger() {}
};

class ConsoleLogger : public Logger {
public:
    void write(string message) override {
        cout << "Console: " << message << endl;
    }
};

class FileLogger : public Logger {
public:
    void write(string message) override {
        ofstream file("log.txt", ios::app);
        file << message << endl;
        file.close();

        cout << "Message written to file." << endl;
    }
};

int main() {
    ConsoleLogger console;
    FileLogger file;

    Logger* logger;

    logger = &console;
    logger->write("Program started");

    logger = &file;
    logger->write("Data saved successfully");

    return 0;
}